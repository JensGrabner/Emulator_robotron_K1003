#ifndef __HEADER_CPU_8008__
#define __HEADER_CPU_8008__
#include <cstdint>

#include "Display.h"
#include "K1003_sys.h"
#include "run_CPU.h"

using namespace std;

#define STACKSIZE 7
#define RAMTOP 6144		// for max possible 4K Ram


// forward declarations needed due to circular references
// forward declaration means that you only declare the class and let
// the compiler search -> at the end he MUST find a class.

class Display;
class K1003_sys;
class run_CPU;

class cpu_8008
{
private:
	Ui::MainWindow* ui;
	Display* myDisplay;
	K1003_sys* myK1003;
	cpu_8008* myCPU;
	run_CPU* my_runCPU;

	uint8_t  Sflag, Zflag, Pflag, Cflag = 0;					// 8008 status flags
	uint16_t PC = 0;	// program counter
	uint8_t  SPtr = 0;	// Stack pointer
	uint8_t  Areg, Breg, Creg, Dreg, Ereg, Hreg, Lreg, Mem = 0;	// 8008 registers and M

	uint8_t	disp1, disp2;	// contents of OUT Ports 1,2
	uint8_t	keyCol = 0;		// col of pressed key
	uint8_t	keyRow = 0;		// 2^row of pressed key 
	uint16_t ColRow = 0;
	uint8_t	scanKeyb = 0;
	uint8_t r, c  = 0;
	uint8_t Key_number = 0;	// a key is pressed currently

	bool ioRelease = true;	// keyboard I/O released or locked
	bool start = true;
	uint8_t ioCount = 0;	// Excelsheet
	uint8_t INreg[8] =   { 0, 0, 0, 0, 0, 0, 0, 0 }; // IN ports,  numbered 0..7
	uint8_t OUTreg[24] = { 0, 0, 0, 0, 0, 0, 0, 0, 
		                   0, 0, 0, 0, 0, 0, 0, 0, 
		                   0, 0, 0, 0, 0, 0, 0, 0 }; // OUT ports, numbered 0..23

	uint8_t dispBuffer[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	uint8_t raw1[8] = { 0, 0, 0, 0, 0, 0, 0, 0 }; // unsorted display contents
	uint8_t raw2[8] = { 0, 0, 0, 0, 0, 0, 0, 0 }; // unsorted display contents
	bool display_change = false;

	void getKey();

	// keyboard layout translation from Wincor Nixdorf based layout to original K1001
	const uint16_t keymap[96] = {
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,   // 0
	0x0702, 0x0702, 0x0802, 0x0802, 0x0902, 0x0902, 0x0A02, 0x0A02, 0x0000, 0x0C02, 0x0D02, 0x0E02,   // 1
	0x0000, 0x0104, 0x0000, 0x0000, 0x0000, 0x0000, 0x0B80, 0x0B20, 0x0B08, 0x0C04, 0x0D04, 0x0E04,   // 2
	0x0008, 0x0108, 0x0208, 0x0508, 0x0608, 0x0708, 0x0808, 0x0908, 0x0A08, 0x0C08, 0x0D08, 0x0E08,   // 3
	0x0010, 0x0110, 0x0210, 0x0510, 0x0610, 0x0710, 0x0810, 0x0910, 0x0A10, 0x0C10, 0x0D10, 0x0E10,   // 4
	0x0020, 0x0120, 0x0220, 0x0520, 0x0620, 0x0720, 0x0820, 0x0920, 0x0A20, 0x0C20, 0x0D20, 0x0E20,   // 5
	0x0040, 0x0140, 0x0240, 0x0540, 0x0640, 0x0740, 0x0840, 0x0940, 0x0A40, 0x0C40, 0x0D40, 0x0E40,   // 6
	0x0080, 0x0180, 0x0280, 0x0580, 0x0680, 0x0780, 0x0880, 0x0980, 0x0A80, 0x0C80, 0x0D80, 0x0E80 }; // 7
//	00		01		02		05		06		07		10		11		12		14		15		16	
	uint16_t Stack[STACKSIZE];

	// parity lookup table
	uint8_t parity[256] = {

		//	Parity Lookup Table for codes 0 .. 255
		1, 0, 0, 1, 0, 1, 1, 0, 0, 1, 1, 0, 1, 0, 0, 1,
		0, 1, 1, 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0,
		0, 1, 1, 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0,
		1, 0, 0, 1, 0, 1, 1, 0, 0, 1, 1, 0, 1, 0, 0, 1,
		0, 1, 1, 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0,
		1, 0, 0, 1, 0, 1, 1, 0, 0, 1, 1, 0, 1, 0, 0, 1,
		1, 0, 0, 1, 0, 1, 1, 0, 0, 1, 1, 0, 1, 0, 0, 1,
		0, 1, 1, 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0,
		0, 1, 1, 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0,
		1, 0, 0, 1, 0, 1, 1, 0, 0, 1, 1, 0, 1, 0, 0, 1,
		1, 0, 0, 1, 0, 1, 1, 0, 0, 1, 1, 0, 1, 0, 0, 1,
		0, 1, 1, 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0,
		1, 0, 0, 1, 0, 1, 1, 0, 0, 1, 1, 0, 1, 0, 0, 1,
		0, 1, 1, 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0,
		0, 1, 1, 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0,
		1, 0, 0, 1, 0, 1, 1, 0, 0, 1, 1, 0, 1, 0, 0, 1
	};

	// in out instruction
	void in_0();
	void in_1();
	void in_2();
	void in_3();
	void in_4();
	void in_5();
	void in_6();
	void in_7();

	void out_00();
	void out_01();
	void out_02();
	void out_03();
	void out_04();
	void out_05();
	void out_06();
	void out_07();
	void out_08();
	void out_09();
	void out_10();
	void out_11();
	void out_12();
	void out_13();
	void out_14();
	void out_15();
	void out_16();
	void out_17();
	void out_18();
	void out_19();
	void out_20();
	void out_21();
	void out_22();
	void out_23();

	// arithmetic instruction
	void adi();
	void adci();
	void sui();
	void sbi();
	void cpi();
	void add_a();
	void add_b();
	void add_c();
	void add_d();
	void add_e();
	void add_h();
	void add_l();
	void add_m();
	void adc_a();
	void adc_b();
	void adc_c();
	void adc_d();
	void adc_e();
	void adc_h();
	void adc_l();
	void adc_m();
	void sub_a();
	void sub_b();
	void sub_c();
	void sub_d();
	void sub_e();
	void sub_h();
	void sub_l();
	void sub_m();
	void sbc_a();
	void sbc_b();
	void sbc_c();
	void sbc_d();
	void sbc_e();
	void sbc_h();
	void sbc_l();
	void sbc_m();
	void cmp_a();
	void cmp_b();
	void cmp_c();
	void cmp_d();
	void cmp_e();
	void cmp_h();
	void cmp_l();
	void cmp_m();

	// jump instructions
	void jmp();	// unconditional
	void jnc();	// not carry
	void jc();	// carry
	void jnz();	// not zero
	void jz();	// zero
	void jp();	// positive
	void jm();	// minus (negative)
	void jpe();	// parity even
	void jpo();	// parity odd

	void mvi_a();
	void mvi_b();
	void mvi_c();
	void mvi_d();
	void mvi_e();
	void mvi_h();
	void mvi_l();
	void mvi_m();
	void mov_aa();
	void mov_ab();
	void mov_ac();
	void mov_ad();
	void mov_ae();
	void mov_ah();
	void mov_al();
	void mov_am();
	void mov_ba();
	void mov_bb();
	void mov_bc();
	void mov_bd();
	void mov_be();
	void mov_bh();
	void mov_bl();
	void mov_bm();
	void mov_ca();
	void mov_cb();
	void mov_cc();
	void mov_cd();
	void mov_ce();
	void mov_ch();
	void mov_cl();
	void mov_cm();
	void mov_da();
	void mov_db();
	void mov_dc();
	void mov_dd();
	void mov_de();
	void mov_dh();
	void mov_dl();
	void mov_dm();
	void mov_ea();
	void mov_eb();
	void mov_ec();
	void mov_ed();
	void mov_ee();
	void mov_eh();
	void mov_el();
	void mov_em();
	void mov_ha();
	void mov_hb();
	void mov_hc();
	void mov_hd();
	void mov_he();
	void mov_hh();
	void mov_hl();
	void mov_hm();
	void mov_la();
	void mov_lb();
	void mov_lc();
	void mov_ld();
	void mov_le();
	void mov_lh();
	void mov_ll();
	void mov_lm();
	void mov_ma();
	void mov_mb();
	void mov_mc();
	void mov_md();
	void mov_me();
	void mov_mh();
	void mov_ml();

	// Boolean Logic i8008 Machine Instructions
	void ani();
	void ori();
	void xri();
	void and_a();
	void and_b();
	void and_c();
	void and_d();
	void and_e();
	void and_h();
	void and_l();
	void and_m();
	void xor_a();
	void xor_b();
	void xor_c();
	void xor_d();
	void xor_e();
	void xor_h();
	void xor_l();
	void xor_m();
	void or_a();
	void or_b();
	void or_c();
	void or_d();
	void or_e();
	void or_h();
	void or_l();
	void or_m();

	// shift and rotate instructions
	void rlc();
	void rrc();
	void ral();
	void rar();
	
	// inc and dec instructions
	void inc_b();
	void dec_b();
	void inc_c();
	void dec_c();
	void inc_d();
	void dec_d();
	void inc_e();
	void dec_e();
	void inc_h();
	void dec_h();
	void inc_l();
	void dec_l();

	// hlt and nop instructions
	void hlt();
	void nop();

	// call and return instructions
	void call();
	void cnc();	// non Carry
	void cnz();	// non Zero
	void cc();	// Carry
	void cz();	// Zero
	void cpo();	// Parity odd
	void cpe();	// Parity even
	void cp();	// Sign positive
	void cm();	// Sign negative
	void ret();
	void rnc();	// non Carry
	void rnz();	// non Zero
	void rc();	// Carry
	void rz();	// Zero
	void rpo();	// Parity odd
	void rpe();	// Parity even
	void rp();	// Sign positive
	void rm();	// Sign minus	
	void rst_0();
	void rst_1();
	void rst_2();
	void rst_3();
	void rst_4();
	void rst_5();
	void rst_6();
	void rst_7();

/*
	// type defs  -- pointer to function
	typedef void (*pt2func)();

	static pt2func iSet[256] = {
	 //  000      001      010      011      100      101      110      111  binaer - octal
		&hlt,    &hlt,    &rlc,    &rnc,    &adi,    &rst_0,  &mvi_a,  &ret,	// 000-007
		&inc_b,  &dec_b,  &rrc,    &rnz,    &adci,   &rst_1,  &mvi_b,  &ret,	// 010-017
		&inc_c,  &dec_c,  &ral,    &rp,     &sui,    &rst_2,  &mvi_c,  &ret,	// 020-027
		&inc_d,  &dec_d,  &rar,    &rpo,    &sbi,    &rst_3,  &mvi_d,  &ret,	// 030-037
		&inc_e,  &dec_e,  &hlt,    &rc,     &ani,    &rst_4,  &mvi_e,  &ret,	// 040-047
		&inc_h,  &dec_h,  &hlt,    &rz,     &xri,    &rst_5,  &mvi_h,  &ret,	// 050-057
		&inc_l,  &dec_l,  &hlt,    &rm,     &ori,    &rst_6,  &mvi_l,  &ret,	// 060-067
		&nop,    &nop,    &nop,    &rpe,    &cpi,    &rst_7,  &mvi_m,  &ret,	// 070-077
		&jnc,    &in_0,   &cnc,    &in_1,   &jmp,    &in_2,   &call,   &in_3,	// 100-107
		&jnz,    &in_4,   &cnz,    &in_5,   &jmp,    &in_6,   &call,   &in_7,	// 110-117
		&jp,     &out_00, &cp,     &out_01, &jmp,    &out_02, &call,   &out_03,	// 120-127
		&jpo,    &out_04, &cpo,    &out_05, &jmp,    &out_06, &call,   &out_07,	// 130-137
		&jc,     &out_08, &cc,     &out_09, &jmp,    &out_10, &call,   &out_11,	// 140-147
		&jz,     &out_12, &cz,     &out_13, &jmp,    &out_14, &call,   &out_15,	// 150-157
		&jm,     &out_16, &cm,     &out_17, &jmp,    &out_18, &call,   &out_19,	// 160-167
		&jpe,    &out_20, &cpe,    &out_21, &jmp,    &out_22, &call,   &out_23,	// 170-177
		&add_a,  &add_b,  &add_c,  &add_d,  &add_e,  &add_h,  &add_l,  &add_m,	// 200-207
		&adc_a,  &adc_b,  &adc_c,  &adc_d,  &adc_e,  &adc_h,  &adc_l,  &adc_m,	// 210-217
		&sub_a,  &sub_b,  &sub_c,  &sub_d,  &sub_e,  &sub_h,  &sub_l,  &sub_m,	// 220-227
		&sbc_a,  &sbc_b,  &sbc_c,  &sbc_d,  &sbc_e,  &sbc_h,  &sbc_l,  &sbc_m,	// 230-237
		&and_a,  &and_b,  &and_c,  &and_d,  &and_e,  &and_h,  &and_l,  &and_m,	// 240-247
		&xor_a,  &xor_b,  &xor_c,  &xor_d,  &xor_e,  &xor_h,  &xor_l,  &xor_m,	// 250-257
		&or_a,   &or_b,   &or_c,   &or_d,   &or_e,   &or_h,   &or_l,   &or_m,	// 260-267
		&cmp_a,  &cmp_b,  &cmp_c,  &cmp_d,  &cmp_e,  &cmp_h,  &cmp_l,  &cmp_m,	// 270-277
		&mov_aa, &mov_ab, &mov_ac, &mov_ad, &mov_ae, &mov_ah, &mov_al, &mov_am,	// 300-307
		&mov_ba, &mov_bb, &mov_bc, &mov_bd, &mov_be, &mov_bh, &mov_bl, &mov_bm,	// 310-317
		&mov_ca, &mov_cb, &mov_cc, &mov_cd, &mov_ce, &mov_ch, &mov_cl, &mov_cm,	// 320-327
		&mov_da, &mov_db, &mov_dc, &mov_dd, &mov_de, &mov_dh, &mov_dl, &mov_dm,	// 330-337
		&mov_ea, &mov_eb, &mov_ec, &mov_ed, &mov_ee, &mov_eh, &mov_el, &mov_em,	// 340-347
		&mov_ha, &mov_hb, &mov_hc, &mov_hd, &mov_he, &mov_hh, &mov_hl, &mov_hm,	// 350-357
		&mov_la, &mov_lb, &mov_lc, &mov_ld, &mov_le, &mov_lh, &mov_ll, &mov_lm,	// 360-367
		&mov_ma, &mov_mb, &mov_mc, &mov_md, &mov_me, &mov_mh, &mov_ml, &hlt		// 370-377
	};
*/

public:
	cpu_8008();
	~cpu_8008();

	void set_UI(Ui::MainWindow* m_user);
	void set_Display(Display* m_display);
	void set_K1003(K1003_sys* m_K1003);
	void set_run_CPU(run_CPU* n_runCPU);

	void KeyPressed(uint8_t KeyNumber);

	void Pi_Clicked();
	void Test();

	void InitProcessor();
	void stop_CPU();
	uint16_t iSet(uint8_t m_nxt);
};

#endif