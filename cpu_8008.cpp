// #include "ui_mainwindow.h"
// #include "Display.h"
// #include <QThread>
#include "cpu_8008.h"
#include "run_CPU.h"
#include "K1003_sys.h"


cpu_8008::cpu_8008()
{
	my_runCPU = new run_CPU();

	Key_number = 0;
	Key_write = 0;
	Key_read = 0;

	start = true;

	my_runCPU->IdlePriority; // LowestPriority;
	my_runCPU->start();

	// my_runCPU->set_Display(myDisplay);
	// my_runCPU->set_UI(ui);
}


cpu_8008::~cpu_8008()
{
	delete my_runCPU;
}

void cpu_8008::set_UI(Ui::MainWindow* m_user)
{
	ui = m_user;
}

void cpu_8008::set_Display(Display* m_display)
{
	myDisplay = m_display;
}

void cpu_8008::set_K1003(K1003_sys* m_K1003)
{
	myK1003 = m_K1003;
}

void cpu_8008::set_run_CPU(run_CPU* n_runCPU)
{
	my_runCPU = n_runCPU;
}

void cpu_8008::KeyPressed(uint8_t KeyNumber_n) {
	Key_buffer[Key_write] = KeyNumber_n;
	Key_write += 1;
	// Key_number = KeyNumber_n;
	// _sleep(2);
}
/*
void cpu_8008::Pi_Clicked()
{
	// my_runCPU->Pi_Clicked(); // o.k.
	// Key_number = 89;  // Pi() o.k.
	// Key_number = 77;  // 1() o.k.

	// myDisplay->DisplayDigit();  // defekt 
	// myK1003->Test();  // o.k.
	// ui->label->setText("PiClicked");  // defekt 
}
*/
/*
void cpu_8008::getKey()
{
	if (Key_number > 0) {
		keyCol = keymap[Key_number] >> 8;
		keyRow = keymap[Key_number] & 0xFF;
		// end of keyboard layout transformation
		Key_number = 0;
	}
}
*/

void cpu_8008::Test()
{
	myK1003->Test();  // o.k.
	// myDisplay->DisplayDigit();  // 
	// myCPU->iSet(0);  // 
	// ui->label->setText("PiClicked");  // 
}

void cpu_8008::InitProcessor()
{
	Areg = Breg = Creg = Dreg = Ereg = Hreg = Lreg = 0;
	PC = 0;
	SPtr = 0;
	Cflag = Zflag = Sflag = Pflag = 0;
	myK1003->K1003_is_on();
	
	keyCol = 0;		// col of pressed key
	keyRow = 0;		// 2^row of pressed key 
	scanKeyb = 0;
	Key_number = 0;
	Key_write = 0;
	Key_read = 0;
	start = true;
	ioRelease = true;
	ioCount = 0;

	// Key_number = 89;  // Test Pi() - Start o.k.

	for (uint8_t i = 0; i < 8; i++) {
		dispBuffer[i] = 0;
		dispBuffer[i + 8] = 0;
		raw1[i] = 0;
		raw2[i] = 0;
		INreg[i] = 0;
		OUTreg[i] = 0;
		OUTreg[i + 8] = 0;
		OUTreg[i + 16] = 0;
	}
	my_runCPU->start_CPU(this);
}

void cpu_8008::run_K1000_Anztest()
{
	uint16_t count = 2;
	uint16_t PC_counter = my_runCPU->K1000_Anztest[0];
	PC_counter *= 256;
	PC_counter += my_runCPU->K1000_Anztest[1];
	while (my_runCPU->K1000_Anztest[count] != 0xFF) {
		my_runCPU->KRom_KRam[count] = my_runCPU->K1000_Anztest[count];
		count += 1;
	}
	// myK1003->Test();  // o.k.
};

void cpu_8008::stop_CPU()
{
	my_runCPU->stop_CPU();
}

void cpu_8008::reStart_CPU()
{
	my_runCPU->reStart_CPU();
}

uint16_t cpu_8008::iSet(uint8_t m_nxt)
{
	Mem = my_runCPU->memory(Lreg | Hreg << 8);
	if (Cflag) Cflag = 0b00000001;	// IMPORTANT: make sure only Bit 0 of Carry flag used

	switch (m_nxt) {

	case 0:
	case 1:
	case 34:
	case 42:
	case 50:
	case 255:
		// hlt();
		myK1003->CPU_hlt(PC);
		myK1003->stop_CPU();
		break;

	case 2:
		rlc();
		break;

	case 3:
		rnc();
		break;

	case 4:
		adi();
		break;

	case 7:
	case 15:
	case 23:
	case 31:
	case 39:
	case 47:
	case 55:
	case 63:
		ret();
		break;

	case 136:
		adc_a();
		break;

	case 137:
		adc_b();
		break;

	case 138:
		adc_c();
		break;

	case 139:
		adc_d();
		break;

	case 140:
		adc_e();
		break;

	case 141:
		adc_h();
		break;

	case 142:
		adc_l();
		break;

	case 143:
		adc_m();
		break;

	case 12:
		adci();
		break;

	case 128:
		add_a();
		break;

	case 129:
		add_b();
		break;

	case 130:
		add_c();
		break;

	case 131:
		add_d();
		break;

	case 132:
		add_e();
		break;

	case 133:
		add_h();
		break;

	case 134:
		add_l();
		break;

	case 135:
		add_m();
		break;

	case 160:
		and_a();
		break;

	case 161:
		and_b();
		break;

	case 162:
		and_c();
		break;

	case 163:
		and_d();
		break;

	case 164:
		and_e();
		break;

	case 165:
		and_h();
		break;

	case 166:
		and_l();
		break;

	case 167:
		and_m();
		break;

	case 36:
		ani();
		break;

	case 70:
		call();
		break;

	case 78:
		call();
		break;

	case 86:
		call();
		break;

	case 94:
		call();
		break;

	case 102:
		call();
		break;

	case 110:
		call();
		break;

	case 118:
		call();
		break;

	case 126:
		call();
		break;

	case 98:
		cc();
		break;

	case 114:
		cm();
		break;

	case 184:
		cmp_a();
		break;

	case 185:
		cmp_b();
		break;

	case 186:
		cmp_c();
		break;

	case 187:
		cmp_d();
		break;

	case 188:
		cmp_e();
		break;

	case 189:
		cmp_h();
		break;

	case 190:
		cmp_l();
		break;

	case 191:
		cmp_m();
		break;

	case 66:
		cnc();
		break;

	case 74:
		cnz();
		break;

	case 82:
		cp();
		break;

	case 122:
		cpe();
		break;

	case 60:
		cpi();
		break;

	case 90:
		cpo();
		break;

	case 106:
		cz();
		break;

	case 9:
		dec_b();
		break;

	case 17:
		dec_c();
		break;

	case 25:
		dec_d();
		break;

	case 33:
		dec_e();
		break;

	case 41:
		dec_h();
		break;

	case 49:
		dec_l();
		break;

	case 65:
		in_0();
		break;

	case 67:
		in_1();
		break;

	case 69:
		in_2();
		break;

	case 71:
		in_3();
		break;

	case 73:
		in_4();
		break;

	case 75:
		in_5();
		break;

	case 77:
		in_6();
		break;

	case 79:
		in_7();
		break;

	case 8:
		inc_b();
		break;

	case 16:
		inc_c();
		break;

	case 24:
		inc_d();
		break;

	case 32:
		inc_e();
		break;

	case 40:
		inc_h();
		break;

	case 48:
		inc_l();
		break;

	case 96:
		jc();
		break;

	case 112:
		jm();
		break;

	case 68:
	case 76:
	case 84:
	case 92:
	case 100:
	case 108:
	case 116:
	case 124:
		jmp();
		break;

	case 64:
		jnc();
		break;

	case 72:
		jnz();
		break;

	case 80:
		jp();
		break;

	case 120:
		jpe();
		break;

	case 88:
		jpo();
		break;

	case 104:
		jz();
		break;

	case 192:
		mov_aa();
		break;

	case 193:
		mov_ab();
		break;

	case 194:
		mov_ac();
		break;

	case 195:
		mov_ad();
		break;

	case 196:
		mov_ae();
		break;

	case 197:
		mov_ah();
		break;

	case 198:
		mov_al();
		break;

	case 199:
		mov_am();
		break;

	case 200:
		mov_ba();
		break;

	case 201:
		mov_bb();
		break;

	case 202:
		mov_bc();
		break;

	case 203:
		mov_bd();
		break;

	case 204:
		mov_be();
		break;

	case 205:
		mov_bh();
		break;

	case 206:
		mov_bl();
		break;

	case 207:
		mov_bm();
		break;

	case 208:
		mov_ca();
		break;

	case 209:
		mov_cb();
		break;

	case 210:
		mov_cc();
		break;

	case 211:
		mov_cd();
		break;

	case 212:
		mov_ce();
		break;

	case 213:
		mov_ch();
		break;

	case 214:
		mov_cl();
		break;

	case 215:
		mov_cm();
		break;

	case 216:
		mov_da();
		break;

	case 217:
		mov_db();
		break;

	case 218:
		mov_dc();
		break;

	case 219:
		mov_dd();
		break;

	case 220:
		mov_de();
		break;

	case 221:
		mov_dh();
		break;

	case 222:
		mov_dl();
		break;

	case 223:
		mov_dm();
		break;

	case 224:
		mov_ea();
		break;

	case 225:
		mov_eb();
		break;

	case 226:
		mov_ec();
		break;

	case 227:
		mov_ed();
		break;

	case 228:
		mov_ee();
		break;

	case 229:
		mov_eh();
		break;

	case 230:
		mov_el();
		break;

	case 231:
		mov_em();
		break;

	case 232:
		mov_ha();
		break;

	case 233:
		mov_hb();
		break;

	case 234:
		mov_hc();
		break;

	case 235:
		mov_hd();
		break;

	case 236:
		mov_he();
		break;

	case 237:
		mov_hh();
		break;

	case 238:
		mov_hl();
		break;

	case 239:
		mov_hm();
		break;

	case 240:
		mov_la();
		break;

	case 241:
		mov_lb();
		break;

	case 242:
		mov_lc();
		break;

	case 243:
		mov_ld();
		break;

	case 244:
		mov_le();
		break;

	case 245:
		mov_lh();
		break;

	case 246:
		mov_ll();
		break;

	case 247:
		mov_lm();
		break;

	case 248:
		mov_ma();
		break;

	case 249:
		mov_mb();
		break;

	case 250:
		mov_mc();
		break;

	case 251:
		mov_md();
		break;

	case 252:
		mov_me();
		break;

	case 253:
		mov_mh();
		break;

	case 254:
		mov_ml();
		break;

	case 6:
		mvi_a();
		break;

	case 14:
		mvi_b();
		break;

	case 22:
		mvi_c();
		break;

	case 30:
		mvi_d();
		break;

	case 38:
		mvi_e();
		break;

	case 46:
		mvi_h();
		break;

	case 54:
		mvi_l();
		break;

	case 62:
		mvi_m();
		break;

	case 56:
	case 57:
	case 58:
		nop();
		break;

	case 176:
		or_a();
		break;

	case 177:
		or_b();
		break;

	case 178:
		or_c();
		break;

	case 179:
		or_d();
		break;

	case 180:
		or_e();
		break;

	case 181:
		or_h();
		break;

	case 182:
		or_l();
		break;

	case 183:
		or_m();
		break;

	case 52:
		ori();
		break;

	case 81:
		out_00();
		break;

	case 83:
		out_01();
		break;

	case 85:
		out_02();
		break;

	case 87:
		out_03();
		break;

	case 89:
		out_04();
		break;

	case 91:
		out_05();
		break;

	case 93:
		out_06();
		break;

	case 95:
		out_07();
		break;

	case 97:
		out_08();
		break;

	case 99:
		out_09();
		break;

	case 101:
		out_10();
		break;

	case 103:
		out_11();
		break;

	case 105:
		out_12();
		break;

	case 107:
		out_13();
		break;

	case 109:
		out_14();
		break;

	case 111:
		out_15();
		break;

	case 113:
		out_16();
		break;

	case 115:
		out_17();
		break;

	case 117:
		out_18();
		break;

	case 119:
		out_19();
		break;

	case 121:
		out_20();
		break;

	case 123:
		out_21();
		break;

	case 125:
		out_22();
		break;

	case 127:
		out_23();
		break;

	case 18:
		ral();
		break;

	case 26:
		rar();
		break;

	case 35:
		rc();
		break;

	case 51:
		rm();
		break;

	case 11:
		rnz();
		break;

	case 19:
		rp();
		break;

	case 59:
		rpe();
		break;

	case 27:
		rpo();
		break;

	case 10:
		rrc();
		break;

	case 5:
		rst_0();
		break;

	case 13:
		rst_1();
		break;

	case 21:
		rst_2();
		break;

	case 29:
		rst_3();
		break;

	case 37:
		rst_4();
		break;

	case 45:
		rst_5();
		break;

	case 53:
		rst_6();
		break;

	case 61:
		rst_7();
		break;

	case 43:
		rz();
		break;

	case 152:
		sbc_a();
		break;

	case 153:
		sbc_b();
		break;

	case 154:
		sbc_c();
		break;

	case 155:
		sbc_d();
		break;

	case 156:
		sbc_e();
		break;

	case 157:
		sbc_h();
		break;

	case 158:
		sbc_l();
		break;

	case 159:
		sbc_m();
		break;

	case 28:
		sbi();
		break;

	case 144:
		sub_a();
		break;

	case 145:
		sub_b();
		break;

	case 146:
		sub_c();
		break;

	case 147:
		sub_d();
		break;

	case 148:
		sub_e();
		break;

	case 149:
		sub_h();
		break;

	case 150:
		sub_l();
		break;

	case 151:
		sub_m();
		break;

	case 20:
		sui();
		break;

	case 168:
		xor_a();
		break;

	case 169:
		xor_b();
		break;

	case 170:
		xor_c();
		break;

	case 171:
		xor_d();
		break;

	case 172:
		xor_e();
		break;

	case 173:
		xor_h();
		break;

	case 174:
		xor_l();
		break;

	case 175:
		xor_m();
		break;

	case 44:
		xri();
		break;

	}

	return PC;
}

void cpu_8008::in_0() // keyboard i/o
{
	/*
	if (ioRelease == true) {
		INreg[0] = keyRow;
	}
	else {
		if (ioCount == keyCol) {
			INreg[0] = keyRow;
		}
		else {
			INreg[0] = 0;
		}
		ioCount += 1; // continue search
		
		if (ioCount > 15) {
			ioCount = 0;
		}
		
	}
	*/
	if (scanKeyb > 0) {		// in scan mode {1,2,3,4...}
		// Areg = 0;			// first assume nothing found...
		INreg[0] = 0;

		if (scanKeyb == (keyCol + 1)) {
			// Areg = keyRow;
			INreg[0] = keyRow;
		}
		else scanKeyb++;

		if (scanKeyb > 15) {
			scanKeyb = 0;	// end scan mode if all cols checked
		}
		Areg = INreg[0];
	}


	PC += 1;
}

void cpu_8008::in_1()
{
	Areg = INreg[1];
	PC += 1;
}

void cpu_8008::in_2()		// Ausrüstungs-Variante des K1000
{
	INreg[2] = 7;		// K1003
//	Areg = 3;		K1002 mit Magnetkarten-Einheit (MKE)
//	Areg = 0;		nur Basisgerät
	Areg = INreg[2];
	PC += 1;
}

void cpu_8008::in_3()
{
	Areg = INreg[3];
	PC += 1;
}

void cpu_8008::in_4()
{
	INreg[4] = 4;		// Drucker immer sofort bereit
	Areg = INreg[4];
	PC += 1;
}

void cpu_8008::in_5()
{
	Areg = INreg[5];
	PC += 1;
}

void cpu_8008::in_6()
{
	Areg = INreg[6];
	PC += 1;
}

void cpu_8008::in_7()
{
	Areg = INreg[7];
	PC += 1;
}
// -----------------

void cpu_8008::out_00()  // Call Anzeige
{
	OUTreg[0] = Areg;   // store also in VBA variable

	uint8_t i = 0;
	uint8_t bit = 0;

	bit = 1;
	for (i = 0; i < 8; i++) {
		if (disp1 & bit) raw1[i] |= Areg;
		if (disp2 & bit) raw2[i] |= Areg;
		bit *= 2;
	}

	if (display_change == false) {
		
		// if Areg = 128 then facilitate translation, output and clear raw display registers for next round
		if (Areg == 128) {
			for (i = 0; i < 8; i++) {
				if (dispBuffer[i] != raw1[i]) {
					display_change = true;
				}
				if (dispBuffer[i + 8] != raw2[i]) {
					display_change = true;
				}
				dispBuffer[i] = raw1[i];
				dispBuffer[i + 8] = raw2[i];
				raw1[i] = 0;
				raw2[i] = 0;
			}

			if (display_change == true) {
				// myK1003->CPU_hlt(0);
				stop_CPU();
				myK1003->set_dispBuffer(dispBuffer);
				reStart_CPU();
				// _sleep(500);
				// myK1003->setPointAll();  // o.k.
				display_change = false;    // synchronisation
			}
		}
    }
	PC += 1;
}

void cpu_8008::out_01()
{
	OUTreg[1] = Areg;   // store also in VBA variable

	disp1 = Areg;	// remember it for subsequent OUT 0
	PC += 1;
}

void cpu_8008::out_02()
{
	OUTreg[2] = Areg;   // store also in VBA variable

	disp2 = Areg;	// remember it for subsequent OUT 0
	PC += 1;
}

// OUT 3 sets the K1000 status LEDs
void cpu_8008::out_03() // statusLEDs
{
	OUTreg[3] = Areg;   // store also in VBA variable

	// PORTD = (uint8_t)((Areg << 2) & 0b11011100);
	// ((Areg << 2) & 0b11011100);
	Areg = Areg << 2;
	Areg = Areg & 0b11011100;

	myK1003->statusLEDs(Areg);
	// myK1003->CPU_hlt(Areg);
	// ui->label->setText("Areg " + QString::number(Areg, 10)); // defekt

	PC += 1;
}

void cpu_8008::out_04()
{
	OUTreg[4] = Areg;   // store also in VBA variable
	PC += 1;
}

void cpu_8008::out_05()
{
	OUTreg[5] = Areg;   // store also in VBA variable
	PC += 1;
}

void cpu_8008::out_06()
{
	OUTreg[6] = Areg;   // store also in VBA variable
	PC += 1;
}

void cpu_8008::out_07()
{
	OUTreg[7] = Areg;   // store also in VBA variable
	PC += 1;
}

void cpu_8008::out_08()	// disable display(?)
{
	OUTreg[8] = Areg;   // store also in VBA variable
	// dispDelay = 2;
	PC += 1;
}

void cpu_8008::out_09()
{
	OUTreg[9] = Areg;   // store also in VBA variable

	if (Key_read != Key_write) {
		Key_number = Key_buffer[Key_read];
		Key_read += 1;
		// my_runCPU->slow_down = 0;
	}

	if (Key_number == 0) {
		if (Areg == keyRow) {
			scanKeyb = 0;	// end scan mode if key found
		}
		if (Areg == 254) {
			scanKeyb = 1;	// OUT 0,254 initiates a key scan
		}
	}
	else {
		if (Areg == 255) {
			scanKeyb = 4;	// OUT 0,255 initiates a key scan
			keyCol = keymap[Key_number] >> 8;
			keyRow = keymap[Key_number] & 0xFF;
			// end of keyboard layout transformation
			Key_number = 0;

			// getKey();		// into global vars keyRow, keyCol
		}
	}

	PC += 1;
}

void cpu_8008::out_10()
{
	OUTreg[10] = Areg;   // store also in VBA variable
	PC += 1;
}

void cpu_8008::out_11()	// enable display(?)
{
	OUTreg[11] = Areg;   // store also in VBA variable
	PC += 1;
}

void cpu_8008::out_12()
{
	OUTreg[12] = Areg;   // store also in VBA variable
	PC += 1;
}

void cpu_8008::out_13()
{
	OUTreg[13] = Areg;   // store also in VBA variable
	PC += 1;
}

void cpu_8008::out_14()
{
	OUTreg[14] = Areg;   // store also in VBA variable
	PC += 1;
}

void cpu_8008::out_15()
{
	OUTreg[15] = Areg;   // store also in VBA variable
	PC += 1;
}

void cpu_8008::out_16()
{
	OUTreg[16] = Areg;   // store also in VBA variable
	PC += 1;
}

void cpu_8008::out_17()
{
	OUTreg[17] = Areg;   // store also in VBA variable
	PC += 1;
}

void cpu_8008::out_18()
{
	OUTreg[18] = Areg;   // store also in VBA variable
	PC += 1;
}

void cpu_8008::out_19()
{
	OUTreg[19] = Areg;   // store also in VBA variable
	PC += 1;
}

void cpu_8008::out_20()
{
	OUTreg[20] = Areg;   // store also in VBA variable
	PC += 1;
}

void cpu_8008::out_21()
{
	OUTreg[21] = Areg;   // store also in VBA variable
	PC += 1;
}

void cpu_8008::out_22()
{
	OUTreg[22] = Areg;   // store also in VBA variable
	PC += 1;
}

void cpu_8008::out_23()
{
	OUTreg[23] = Areg;   // store also in VBA variable
	// if (Areg == 0) PrintLine();
	PC += 1;
}

// arithmetic instruction
void cpu_8008::adi()
{
	uint16_t x = 0;
	Areg = x = Areg + my_runCPU->memory(PC + 1);
	Cflag = (x >> 8) & 1;	// Bit 9 of x
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 2;
}

void cpu_8008::adci()
{
	uint16_t x = 0;
	Areg = x = Areg + my_runCPU->memory(PC + 1) + Cflag;
	Cflag = (x >> 8) & 1;	// Bit 9 of x
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 2;
}

void cpu_8008::sui()
{
	uint16_t x = 0;
	Areg = x = Areg - my_runCPU->memory(PC + 1);
	Cflag = (x >> 8) & 1;	// Bit 9 of x
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 2;
}

void cpu_8008::sbi()
{
	uint16_t x = 0;
	Areg = x = Areg - my_runCPU->memory(PC + 1) - Cflag;
	Cflag = (x >> 8) & 1;	// Bit 9 of x
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 2;
}

void cpu_8008::cpi()
{
	uint16_t x = 0;
	x = Areg - my_runCPU->memory(PC + 1);
	Cflag = (x >> 8) & 1;	// Bit 9 of x
	x = x & 255;	// mask to 1 Byte
	Zflag = !x;
	Sflag = x & 128;
	Pflag = parity[x];
	PC += 2;
}

void cpu_8008::add_a()
{
	uint16_t x = 0;
	Areg = x = Areg + Areg;
	Cflag = (x >> 8) & 1;	// Bit 9 of x
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

void cpu_8008::add_b()
{
	uint16_t x = 0;
	Areg = x = Areg + Breg;
	Cflag = (x >> 8) & 1;	// Bit 9 of x
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

void cpu_8008::add_c()
{
	uint16_t x = 0;
	Areg = x = Areg + Creg;
	Cflag = (x >> 8) & 1;	// Bit 9 of x
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

void cpu_8008::add_d()
{
	uint16_t x = 0;
	Areg = x = Areg + Dreg;
	Cflag = (x >> 8) & 1;	// Bit 9 of x
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

void cpu_8008::add_e()
{
	uint16_t x = 0;
	Areg = x = Areg + Ereg;
	Cflag = (x >> 8) & 1;	// Bit 9 of x
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

void cpu_8008::add_h()
{
	uint16_t x = 0;
	Areg = x = Areg + Hreg;
	Cflag = (x >> 8) & 1;	// Bit 9 of x
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

void cpu_8008::add_l()
{
	uint16_t x = 0;
	Areg = x = Areg + Lreg;
	Cflag = (x >> 8) & 1;	// Bit 9 of x
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

void cpu_8008::add_m()
{
	uint16_t x = 0;
	Areg = x = Areg + Mem;
	Cflag = (x >> 8) & 1;	// Bit 9 of x
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

void cpu_8008::adc_a()
{
	uint16_t x = 0;
	Areg = x = Areg + Areg + Cflag;
	Cflag = (x >> 8) & 1;	// Bit 9 of x
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

void cpu_8008::adc_b()
{
	uint16_t x = 0;
	Areg = x = Areg + Breg + Cflag;
	Cflag = (x >> 8) & 1;	// Bit 9 of x
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

void cpu_8008::adc_c()
{
	uint16_t x = 0;
	Areg = x = Areg + Creg + Cflag;
	Cflag = (x >> 8) & 1;	// Bit 9 of x
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

void cpu_8008::adc_d()
{
	uint16_t x = 0;
	Areg = x = Areg + Dreg + Cflag;
	Cflag = (x >> 8) & 1;	// Bit 9 of x
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

void cpu_8008::adc_e()
{
	uint16_t x = 0;
	Areg = x = Areg + Ereg + Cflag;
	Cflag = (x >> 8) & 1;	// Bit 9 of x
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

void cpu_8008::adc_h()
{
	uint16_t x = 0;
	Areg = x = Areg + Hreg + Cflag;
	Cflag = (x >> 8) & 1;	// Bit 9 of x
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

void cpu_8008::adc_l()
{
	uint16_t x = 0;
	Areg = x = Areg + Lreg + Cflag;
	Cflag = (x >> 8) & 1;	// Bit 9 of x
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

void cpu_8008::adc_m()
{
	uint16_t x = 0;
	Areg = x = Areg + Mem + Cflag;
	Cflag = (x >> 8) & 1;	// Bit 9 of x
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

void cpu_8008::sub_a()
{
	uint16_t x = 0;
	Areg = x = Areg - Areg;
	Cflag = (x >> 8) & 1;	// Bit 9 of x
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

void cpu_8008::sub_b()
{
	uint16_t x = 0;
	Areg = x = Areg - Breg;
	Cflag = (x >> 8) & 1;	// Bit 9 of x
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

void cpu_8008::sub_c()
{
	uint16_t x = 0;
	Areg = x = Areg - Creg;
	Cflag = (x >> 8) & 1;	// Bit 9 of x
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

void cpu_8008::sub_d()
{
	uint16_t x = 0;
	Areg = x = Areg - Dreg;
	Cflag = (x >> 8) & 1;	// Bit 9 of x
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

void cpu_8008::sub_e()
{
	uint16_t x = 0;
	Areg = x = Areg - Ereg;
	Cflag = (x >> 8) & 1;	// Bit 9 of x
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

void cpu_8008::sub_h()
{
	uint16_t x = 0;
	Areg = x = Areg - Hreg;
	Cflag = (x >> 8) & 1;	// Bit 9 of x
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

void cpu_8008::sub_l()
{
	uint16_t x = 0;
	Areg = x = Areg - Lreg;
	Cflag = (x >> 8) & 1;	// Bit 9 of x
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

void cpu_8008::sub_m()
{
	uint16_t x = 0;
	Areg = x = Areg - Mem;
	Cflag = (x >> 8) & 1;	// Bit 9 of x
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

void cpu_8008::sbc_a()
{
	uint16_t x = 0;
	Areg = x = Areg - Areg - Cflag;
	Cflag = (x >> 8) & 1;	// Bit 9 of x
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

void cpu_8008::sbc_b()
{
	uint16_t x = 0;
	Areg = x = Areg - Breg - Cflag;
	Cflag = (x >> 8) & 1;	// Bit 9 of x
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

void cpu_8008::sbc_c()
{
	uint16_t x = 0;
	Areg = x = Areg - Creg - Cflag;
	Cflag = (x >> 8) & 1;	// Bit 9 of x
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

void cpu_8008::sbc_d()
{
	uint16_t x = 0;
	Areg = x = Areg - Dreg - Cflag;
	Cflag = (x >> 8) & 1;	// Bit 9 of x
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

void cpu_8008::sbc_e()
{
	uint16_t x = 0;
	Areg = x = Areg - Ereg - Cflag;
	Cflag = (x >> 8) & 1;	// Bit 9 of x
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

void cpu_8008::sbc_h()
{
	uint16_t x = 0;
	Areg = x = Areg - Hreg - Cflag;
	Cflag = (x >> 8) & 1;	// Bit 9 of x
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

void cpu_8008::sbc_l()
{
	uint16_t x = 0;
	Areg = x = Areg - Lreg - Cflag;
	Cflag = (x >> 8) & 1;	// Bit 9 of x
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

void cpu_8008::sbc_m()
{
	uint16_t x = 0;
	Areg = x = Areg - Mem - Cflag;
	Cflag = (x >> 8) & 1;	// Bit 9 of x
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

void cpu_8008::cmp_a()
{
	uint16_t x = 0;
	x = Areg - Areg;
	Cflag = (x >> 8) & 1;	// Bit 9 of x
	x = x & 255;
	Zflag = !x;
	Sflag = x & 128;
	Pflag = parity[x];
	PC += 1;
}

void cpu_8008::cmp_b()
{
	uint16_t x = 0;
	x = Areg - Breg;
	Cflag = (x >> 8) & 1;	// Bit 9 of x
	x = x & 255;
	Zflag = !x;
	Sflag = x & 128;
	Pflag = parity[x];
	PC += 1;
}

void cpu_8008::cmp_c()
{
	uint16_t x = 0;
	x = Areg - Creg;
	Cflag = (x >> 8) & 1;	// Bit 9 of x
	x = x & 255;
	Zflag = !x;
	Sflag = x & 128;
	Pflag = parity[x];
	PC += 1;
}

void cpu_8008::cmp_d()
{
	uint16_t x = 0;
	x = Areg - Dreg;
	Cflag = (x >> 8) & 1;	// Bit 9 of x
	x = x & 255;
	Zflag = !x;
	Sflag = x & 128;
	Pflag = parity[x];
	PC += 1;
}

void cpu_8008::cmp_e()
{
	uint16_t x = 0;
	x = Areg - Ereg;
	Cflag = (x >> 8) & 1;	// Bit 9 of x
	x = x & 255;
	Zflag = !x;
	Sflag = x & 128;
	Pflag = parity[x];
	PC += 1;
}

void cpu_8008::cmp_h()
{
	uint16_t x = 0;
	x = Areg - Hreg;
	Cflag = (x >> 8) & 1;	// Bit 9 of x
	x = x & 255;
	Zflag = !x;
	Sflag = x & 128;
	Pflag = parity[x];
	PC += 1;
}

void cpu_8008::cmp_l()
{
	uint16_t x = 0;
	x = Areg - Lreg;
	Cflag = (x >> 8) & 1;	// Bit 9 of x
	x = x & 255;
	Zflag = !x;
	Sflag = x & 128;
	Pflag = parity[x];
	PC += 1;
}

void cpu_8008::cmp_m()
{
	uint16_t x = 0;
	x = Areg - Mem;
	Cflag = (x >> 8) & 1;	// Bit 9 of x
	x = x & 255;
	Zflag = !x;
	Sflag = x & 128;
	Pflag = parity[x];
	PC += 1;
}

// jump instructions
void cpu_8008::jmp()
{
	uint16_t x = 0;
	x = my_runCPU->memory(PC + 1) | my_runCPU->memory(PC + 2) << 8;
	PC = x;
}

void cpu_8008::jnc()	// not carry
{
	uint16_t x = 0;
	if (!Cflag) {
		x = my_runCPU->memory(PC + 1) | my_runCPU->memory(PC + 2) << 8;
	}
	else {
		x = PC + 3;
	}
	PC = x;
}

void cpu_8008::jc()	// carry
{
	uint16_t x = 0;
	if (Cflag) {
		x = my_runCPU->memory(PC + 1) | my_runCPU->memory(PC + 2) << 8;
	}
	else {
		x = PC + 3;
	}
	PC = x;
}

void cpu_8008::jnz()	// not zero
{
	uint16_t x = 0;
	if (!Zflag) {
		x = my_runCPU->memory(PC + 1) | my_runCPU->memory(PC + 2) << 8;
	}
	else {
		x = PC + 3;
	}
	PC = x;
}

void cpu_8008::jz()	// zero
{
	uint16_t x = 0;
	if (Zflag) {
		x = my_runCPU->memory(PC + 1) | my_runCPU->memory(PC + 2) << 8;
	}
	else {
		x = PC + 3;
	}
	PC = x;
}

void cpu_8008::jp()	// positive
{
	uint16_t x = 0;
	if (!Sflag) {
		x = my_runCPU->memory(PC + 1) | my_runCPU->memory(PC + 2) << 8;
	}
	else {
		x = PC + 3;
	}
	PC = x;
}

void cpu_8008::jm()	// minus
{
	uint16_t x = 0;
	if (Sflag) {
		x = my_runCPU->memory(PC + 1) | my_runCPU->memory(PC + 2) << 8;
	}
	else {
		x = PC + 3;
	}
	PC = x;
}

void cpu_8008::jpe()	// parity even
{
	uint16_t x = 0;
	if (Pflag) {
		x = my_runCPU->memory(PC + 1) | my_runCPU->memory(PC + 2) << 8;
	}
	else {
		x = PC + 3;
	}
	PC = x;
}

void cpu_8008::jpo()	// parity odd
{
	uint16_t x = 0;
	if (!Pflag) {
		x = my_runCPU->memory(PC + 1) | my_runCPU->memory(PC + 2) << 8;
	}
	else {
		x = PC + 3;
	}
	PC = x;
}

// call and return instructions
void cpu_8008::call()
{
	Stack[SPtr] = PC + 3;
	SPtr++;
	if (SPtr >= STACKSIZE) SPtr = 0;
	PC = my_runCPU->memory(PC + 1) | my_runCPU->memory(PC + 2) << 8;
}

void cpu_8008::cnc()
{
	if (!Cflag) {
		Stack[SPtr] = PC + 3;
		SPtr++;
		if (SPtr >= STACKSIZE) SPtr = 0;
		PC = my_runCPU->memory(PC + 1) | my_runCPU->memory(PC + 2) << 8;
	}
	else {
		PC += 3;
	}
}

void cpu_8008::cnz()
{
	if (!Zflag) {
		Stack[SPtr] = PC + 3;
		SPtr++;
		if (SPtr >= STACKSIZE) SPtr = 0;
		PC = my_runCPU->memory(PC + 1) | my_runCPU->memory(PC + 2) << 8;
	}
	else {
		PC += 3;
	}

}

void cpu_8008::cc()
{
	if (Cflag) {
		Stack[SPtr] = PC + 3;
		SPtr++;
		if (SPtr >= STACKSIZE) SPtr = 0;
		PC = my_runCPU->memory(PC + 1) | my_runCPU->memory(PC + 2) << 8;
	}
	else {
		PC += 3;
	}

}

void cpu_8008::cz()
{
	if (Zflag) {
		Stack[SPtr] = PC + 3;
		SPtr++;
		if (SPtr >= STACKSIZE) SPtr = 0;
		PC = my_runCPU->memory(PC + 1) | my_runCPU->memory(PC + 2) << 8;
	}
	else {
		PC += 3;
	}

}

void cpu_8008::cpo()
{
	if (!Pflag) {
		Stack[SPtr] = PC + 3;
		SPtr++;
		if (SPtr >= STACKSIZE) SPtr = 0;
		PC = my_runCPU->memory(PC + 1) | my_runCPU->memory(PC + 2) << 8;
	}
	else {
		PC += 3;
	}

}

void cpu_8008::cpe()
{
	if (Pflag) {
		Stack[SPtr] = PC + 3;
		SPtr++;
		if (SPtr >= STACKSIZE) SPtr = 0;
		PC = my_runCPU->memory(PC + 1) | my_runCPU->memory(PC + 2) << 8;
	}
	else {
		PC += 3;
	}

}

void cpu_8008::cp()
{
	if (!Sflag) {
		Stack[SPtr] = PC + 3;
		SPtr++;
		if (SPtr >= STACKSIZE) SPtr = 0;
		PC = my_runCPU->memory(PC + 1) | my_runCPU->memory(PC + 2) << 8;
	}
	else {
		PC += 3;
	}

}

void cpu_8008::cm()
{
	if (Sflag) {
		Stack[SPtr] = PC + 3;
		SPtr++;
		if (SPtr >= STACKSIZE) SPtr = 0;
		PC = my_runCPU->memory(PC + 1) | my_runCPU->memory(PC + 2) << 8;
	}
	else {
		PC += 3;
	}

}

void cpu_8008::ret()
{
	SPtr--;
	if (SPtr < 0) SPtr = STACKSIZE - 1;
	PC = Stack[SPtr];
}

void cpu_8008::rnc()
{
	if (!Cflag) {
		SPtr--;
		if (SPtr < 0) SPtr = STACKSIZE - 1;
		PC = Stack[SPtr];
	}
	else PC += 1;
}

void cpu_8008::rnz()
{
	if (!Zflag) {
		SPtr--;
		if (SPtr < 0) SPtr = STACKSIZE - 1;
		PC = Stack[SPtr];
	}
	else PC += 1;
}

void cpu_8008::rc()
{
	if (Cflag) {
		SPtr--;
		if (SPtr < 0) SPtr = STACKSIZE - 1;
		PC = Stack[SPtr];
	}
	else PC += 1;
}

void cpu_8008::rz()
{
	if (Zflag) {
		SPtr--;
		if (SPtr < 0) SPtr = STACKSIZE - 1;
		PC = Stack[SPtr];
	}
	else PC += 1;
}

void cpu_8008::rpo()
{
	if (!Pflag) {
		SPtr--;
		if (SPtr < 0) SPtr = STACKSIZE - 1;
		PC = Stack[SPtr];
	}
	else PC += 1;
}

void cpu_8008::rpe()
{
	if (Pflag) {
		SPtr--;
		if (SPtr < 0) SPtr = STACKSIZE - 1;
		PC = Stack[SPtr];
	}
	else PC += 1;
}

void cpu_8008::rp()
{
	if (!Sflag) {
		SPtr--;
		if (SPtr < 0) SPtr = STACKSIZE - 1;
		PC = Stack[SPtr];
	}
	else PC += 1;
}

void cpu_8008::rm()
{
	if (Sflag) {
		SPtr--;
		if (SPtr < 0) SPtr = STACKSIZE - 1;
		PC = Stack[SPtr];
	}
	else PC += 1;
}

void cpu_8008::rst_0()
{
	Stack[SPtr] = PC + 1;
	SPtr++;
	if (SPtr >= STACKSIZE) SPtr = 0;
	PC = 0;
}

void cpu_8008::rst_1()
{
	Stack[SPtr] = PC + 1;
	SPtr++;
	if (SPtr >= STACKSIZE) SPtr = 0;
	PC = 8;
}

void cpu_8008::rst_2()
{
	Stack[SPtr] = PC + 1;
	SPtr++;
	if (SPtr >= STACKSIZE) SPtr = 0;
	PC = 16;
}

void cpu_8008::rst_3()
{
	Stack[SPtr] = PC + 1;
	SPtr++;
	if (SPtr >= STACKSIZE) SPtr = 0;
	PC = 24;
}

void cpu_8008::rst_4()
{
	Stack[SPtr] = PC + 1;
	SPtr++;
	if (SPtr >= STACKSIZE) SPtr = 0;
	PC = 32;
}

void cpu_8008::rst_5()
{
	Stack[SPtr] = PC + 1;
	SPtr++;
	if (SPtr >= STACKSIZE) SPtr = 0;
	PC = 40;
}

void cpu_8008::rst_6()
{
	Stack[SPtr] = PC + 1;
	SPtr++;
	if (SPtr >= STACKSIZE) SPtr = 0;
	PC = 48;
}

void cpu_8008::rst_7()
{
	Stack[SPtr] = PC + 1;
	SPtr++;
	if (SPtr >= STACKSIZE) SPtr = 0;
	PC = 56;
}

void cpu_8008::hlt()	// no PC increment -> infinite loop within i8008 emulation
{
	// let LEDs blink to signalize problem
	///  to do something -> Error
}	// end hlt

void cpu_8008::nop()	// undefined OpCodes
{
	PC += 1;
}	// end nop

	// inc and dec instructions
void cpu_8008::inc_b()
{
	Breg++;
	Zflag = !Breg;
	Sflag = Breg & 128;
	Pflag = parity[Breg];
	PC += 1;
}

void cpu_8008::dec_b()
{
	Breg--;
	Zflag = !Breg;
	Sflag = Breg & 128;
	Pflag = parity[Breg];
	PC += 1;
}

void cpu_8008::inc_c()
{
	Creg++;
	Zflag = !Creg;
	Sflag = Creg & 128;
	Pflag = parity[Creg];
	PC += 1;
}

void cpu_8008::dec_c()
{
	Creg--;
	Zflag = !Creg;
	Sflag = Creg & 128;
	Pflag = parity[Creg];
	PC += 1;
}

void cpu_8008::inc_d()
{
	Dreg++;
	Zflag = !Dreg;
	Sflag = Dreg & 128;
	Pflag = parity[Dreg];
	PC += 1;
}

void cpu_8008::dec_d()
{
	Dreg--;
	Zflag = !Dreg;
	Sflag = Dreg & 128;
	Pflag = parity[Dreg];
	PC += 1;
}

void cpu_8008::inc_e()
{
	Ereg++;
	Zflag = !Ereg;
	Sflag = Ereg & 128;
	Pflag = parity[Ereg];
	PC += 1;
}

void cpu_8008::dec_e()
{
	Ereg--;
	Zflag = !Ereg;
	Sflag = Ereg & 128;
	Pflag = parity[Ereg];
	PC += 1;
}

void cpu_8008::inc_h()
{
	Hreg++;
	Zflag = !Hreg;
	Sflag = Hreg & 128;
	Pflag = parity[Hreg];
	PC += 1;
}

void cpu_8008::dec_h()
{
	Hreg--;
	Zflag = !Hreg;
	Sflag = Hreg & 128;
	Pflag = parity[Hreg];
	PC += 1;
}

void cpu_8008::inc_l()
{
	Lreg++;
	Zflag = !Lreg;
	Sflag = Lreg & 128;
	Pflag = parity[Lreg];
	PC += 1;
}

void cpu_8008::dec_l()
{
	Lreg--;
	Zflag = !Lreg;
	Sflag = Lreg & 128;
	Pflag = parity[Lreg];
	PC += 1;
}

// shift and rotate instructions
void cpu_8008::rlc()	// rotate A left through Carry
{
	uint16_t x = 0;
	x = Areg << 1;
	Cflag = x >> 8;
	x |= Cflag;
	Areg = x & 255;
	PC += 1;
}

void cpu_8008::rrc()	// rotate A right through Carry
{
	uint16_t x = 0;
	x = Areg >> 1;
	Cflag = Areg & 1;
	x |= Cflag << 7;
	Areg = x;
	PC += 1;
}

void cpu_8008::ral()	// rotate A left
{
	uint16_t x = 0;
	x = Areg << 1;
	x = x | Cflag;
	Areg = x & 255;
	Cflag = x >> 8;
	PC += 1;
}

void cpu_8008::rar()	// rotate A right
{
	uint16_t x = 0;
	x = Areg >> 1;
	x |= Cflag << 7;
	Cflag = Areg & 1;
	Areg = x;
	PC += 1;
}

// Boolean Logic i8008 Machine Instructions
void cpu_8008::ani()
{
	Areg &= my_runCPU->memory(PC + 1);
	Cflag = 0;	// Carry always false for this type of instruction
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 2;
}

void cpu_8008::ori()
{
	Areg |= my_runCPU->memory(PC + 1);
	Cflag = 0;	// Carry always false for this type of instruction
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 2;
}

void cpu_8008::xri()
{
	Areg ^= my_runCPU->memory(PC + 1);
	Cflag = 0;	// Carry always false for this type of instruction
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 2;
}

void cpu_8008::and_a()
{
	Areg &= Areg;
	Cflag = 0;	// Carry always false for this type of instruction
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

void cpu_8008::and_b()
{
	Areg &= Breg;
	Cflag = 0;	// Carry always false for this type of instruction
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

void cpu_8008::and_c()
{
	Areg &= Creg;
	Cflag = 0;	// Carry always false for this type of instruction
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

void cpu_8008::and_d()
{
	Areg &= Dreg;
	Cflag = 0;	// Carry always false for this type of instruction
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

void cpu_8008::and_e()
{
	Areg &= Ereg;
	Cflag = 0;	// Carry always false for this type of instruction
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

void cpu_8008::and_h()
{
	Areg &= Hreg;
	Cflag = 0;	// Carry always false for this type of instruction
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

void cpu_8008::and_l()
{
	Areg &= Lreg;
	Cflag = 0;	// Carry always false for this type of instruction
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

void cpu_8008::and_m()
{
	Areg &= Mem;
	Cflag = 0;	// Carry always false for this type of instruction
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

void cpu_8008::xor_a()
{
	Areg ^= Areg;
	Cflag = 0;	// Carry always false for this type of instruction
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

void cpu_8008::xor_b()
{
	Areg ^= Breg;
	Cflag = 0;	// Carry always false for this type of instruction
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

void cpu_8008::xor_c()
{
	Areg ^= Creg;
	Cflag = 0;	// Carry always false for this type of instruction
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

void cpu_8008::xor_d()
{
	Areg ^= Dreg;
	Cflag = 0;	// Carry always false for this type of instruction
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

void cpu_8008::xor_e()
{
	Areg ^= Ereg;
	Cflag = 0;	// Carry always false for this type of instruction
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

void cpu_8008::xor_h()
{
	Areg ^= Hreg;
	Cflag = 0;	// Carry always false for this type of instruction
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

void cpu_8008::xor_l()
{
	Areg ^= Lreg;
	Cflag = 0;	// Carry always false for this type of instruction
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

void cpu_8008::xor_m()
{
	Areg ^= Mem;
	Cflag = 0;	// Carry always false for this type of instruction
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

void cpu_8008::or_a()
{
	Areg |= Areg;
	Cflag = 0;	// Carry always false for this type of instruction
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

void cpu_8008::or_b()
{
	Areg |= Breg;
	Cflag = 0;	// Carry always false for this type of instruction
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

void cpu_8008::or_c()
{
	Areg |= Creg;
	Cflag = 0;	// Carry always false for this type of instruction
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

void cpu_8008::or_d()
{
	Areg |= Dreg;
	Cflag = 0;	// Carry always false for this type of instruction
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

void cpu_8008::or_e()
{
	Areg |= Ereg;
	Cflag = 0;	// Carry always false for this type of instruction
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

void cpu_8008::or_h()
{
	Areg |= Hreg;
	Cflag = 0;	// Carry always false for this type of instruction
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

void cpu_8008::or_l()
{
	Areg |= Lreg;
	Cflag = 0;	// Carry always false for this type of instruction
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

void cpu_8008::or_m()
{
	Areg |= Mem;
	Cflag = 0;	// Carry always false for this type of instruction
	Zflag = !Areg;
	Sflag = Areg & 128;
	Pflag = parity[Areg];
	PC += 1;
}

// code for MOV instructions of Intel 8008
// no influence on flags

void cpu_8008::mvi_a()
{
	Areg = my_runCPU->memory(PC + 1);
	PC += 2;
}

void cpu_8008::mvi_b()
{
	Breg = my_runCPU->memory(PC + 1);
	PC += 2;
}

void cpu_8008::mvi_c()
{
	Creg = my_runCPU->memory(PC + 1);
	PC += 2;
}

void cpu_8008::mvi_d()
{
	Dreg = my_runCPU->memory(PC + 1);
	PC += 2;
}

void cpu_8008::mvi_e()
{
	Ereg = my_runCPU->memory(PC + 1);
	PC += 2;
}

void cpu_8008::mvi_h()
{
	Hreg = my_runCPU->memory(PC + 1);
	PC += 2;
}

void cpu_8008::mvi_l()
{
	Lreg = my_runCPU->memory(PC + 1);
	PC += 2;
}

void cpu_8008::mvi_m()
{
	uint16_t addr;
	addr = Lreg | Hreg << 8;
	if ((addr > 2047) && (addr < RAMTOP)) {
		my_runCPU->KRom_KRam[addr] = my_runCPU->memory(PC + 1);	// K1000 specific: writable RAM only 4K starting at 02048
	}
	PC += 2;
}

void cpu_8008::mov_aa()
{
	Areg = Areg;
	PC += 1;
}

void cpu_8008::mov_ab()
{
	Areg = Breg;
	PC += 1;
}

void cpu_8008::mov_ac()
{
	Areg = Creg;
	PC += 1;
}

void cpu_8008::mov_ad()
{
	Areg = Dreg;
	PC += 1;
}

void cpu_8008::mov_ae()
{
	Areg = Ereg;
	PC += 1;
}

void cpu_8008::mov_ah()
{
	Areg = Hreg;
	PC += 1;
}

void cpu_8008::mov_al()
{
	Areg = Lreg;
	PC += 1;
}

void cpu_8008::mov_am()
{
	Areg = Mem;
	PC += 1;
}

void cpu_8008::mov_ba()
{
	Breg = Areg;
	PC += 1;
}

void cpu_8008::mov_bb()
{
	Breg = Breg;
	PC += 1;
}

void cpu_8008::mov_bc()
{
	Breg = Creg;
	PC += 1;
}

void cpu_8008::mov_bd()
{
	Breg = Dreg;
	PC += 1;
}

void cpu_8008::mov_be()
{
	Breg = Ereg;
	PC += 1;
}

void cpu_8008::mov_bh()
{
	Breg = Hreg;
	PC += 1;
}

void cpu_8008::mov_bl()
{
	Breg = Lreg;
	PC += 1;
}

void cpu_8008::mov_bm()
{
	Breg = Mem;
	PC += 1;
}

void cpu_8008::mov_ca()
{
	Creg = Areg;
	PC += 1;
}

void cpu_8008::mov_cb()
{
	Creg = Breg;
	PC += 1;
}

void cpu_8008::mov_cc()
{
	Creg = Creg;
	PC += 1;
}

void cpu_8008::mov_cd()
{
	Creg = Dreg;
	PC += 1;
}

void cpu_8008::mov_ce()
{
	Creg = Ereg;
	PC += 1;
}

void cpu_8008::mov_ch()
{
	Creg = Hreg;
	PC += 1;
}

void cpu_8008::mov_cl()
{
	Creg = Lreg;
	PC += 1;
}

void cpu_8008::mov_cm()
{
	Creg = Mem;
	PC += 1;
}

void cpu_8008::mov_da()
{
	Dreg = Areg;
	PC += 1;
}

void cpu_8008::mov_db()
{
	Dreg = Breg;
	PC += 1;
}

void cpu_8008::mov_dc()
{
	Dreg = Creg;
	PC += 1;
}

void cpu_8008::mov_dd()
{
	Dreg = Dreg;
	PC += 1;
}

void cpu_8008::mov_de()
{
	Dreg = Ereg;
	PC += 1;
}

void cpu_8008::mov_dh()
{
	Dreg = Hreg;
	PC += 1;
}

void cpu_8008::mov_dl()
{
	Dreg = Lreg;
	PC += 1;
}

void cpu_8008::mov_dm()
{
	Dreg = Mem;
	PC += 1;
}

void cpu_8008::mov_ea()
{
	Ereg = Areg;
	PC += 1;
}

void cpu_8008::mov_eb()
{
	Ereg = Breg;
	PC += 1;
}

void cpu_8008::mov_ec()
{
	Ereg = Creg;
	PC += 1;
}

void cpu_8008::mov_ed()
{
	Ereg = Dreg;
	PC += 1;
}

void cpu_8008::mov_ee()
{
	Ereg = Ereg;
	PC += 1;
}

void cpu_8008::mov_eh()
{
	Ereg = Hreg;
	PC += 1;
}

void cpu_8008::mov_el()
{
	Ereg = Lreg;
	PC += 1;
}

void cpu_8008::mov_em()
{
	Ereg = Mem;
	PC += 1;
}

void cpu_8008::mov_ha()
{
	Hreg = Areg;
	PC += 1;
}

void cpu_8008::mov_hb()
{
	Hreg = Breg;
	PC += 1;
}

void cpu_8008::mov_hc()
{
	Hreg = Creg;
	PC += 1;
}

void cpu_8008::mov_hd()
{
	Hreg = Dreg;
	PC += 1;
}

void cpu_8008::mov_he()
{
	Hreg = Ereg;
	PC += 1;
}

void cpu_8008::mov_hh()
{
	Hreg = Hreg;
	PC += 1;
}

void cpu_8008::mov_hl()
{
	Hreg = Lreg;
	PC += 1;
}

void cpu_8008::mov_hm()
{
	Hreg = Mem;
	PC += 1;
}

void cpu_8008::mov_la()
{
	Lreg = Areg;
	PC += 1;
}

void cpu_8008::mov_lb()
{
	Lreg = Breg;
	PC += 1;
}

void cpu_8008::mov_lc()
{
	Lreg = Creg;
	PC += 1;
}

void cpu_8008::mov_ld()
{
	Lreg = Dreg;
	PC += 1;
}

void cpu_8008::mov_le()
{
	Lreg = Ereg;
	PC += 1;
}

void cpu_8008::mov_lh()
{
	Lreg = Hreg;
	PC += 1;
}

void cpu_8008::mov_ll()
{
	Lreg = Lreg;
	PC += 1;
}

void cpu_8008::mov_lm()
{
	Lreg = Mem;
	PC += 1;
}

void cpu_8008::mov_ma()
{
	uint16_t addr;
	addr = Lreg | Hreg << 8;
	if ((addr > 2047) && (addr < RAMTOP)) {
		my_runCPU->KRom_KRam[addr] = Areg;	// K1000 specific: writable RAM only 4K starting at 2048
	}
	PC += 1;
}

void cpu_8008::mov_mb()
{
	uint16_t addr;
	addr = Lreg | Hreg << 8;
	if ((addr > 2047) && (addr < RAMTOP)) {
		my_runCPU->KRom_KRam[addr] = Breg;	// K1000 specific: writable RAM only 4K starting at 2048
	}
	PC += 1;
}

void cpu_8008::mov_mc()
{
	uint16_t addr;
	addr = Lreg | Hreg << 8;
	if ((addr > 2047) && (addr < RAMTOP)) {
		my_runCPU->KRom_KRam[addr] = Creg;	// K1000 specific: writable RAM only 4K starting at 2048
	}
	PC += 1;
}

void cpu_8008::mov_md()
{
	uint16_t addr;
	addr = Lreg | Hreg << 8;
	if ((addr > 2047) && (addr < RAMTOP)) {
		my_runCPU->KRom_KRam[addr] = Dreg;	// K1000 specific: writable RAM only 4K starting at 2048
	}
	PC += 1;
}

void cpu_8008::mov_me()
{
	uint16_t addr;
	addr = Lreg | Hreg << 8;
	if ((addr > 2047) && (addr < RAMTOP)) {
		my_runCPU->KRom_KRam[addr] = Ereg;	// K1000 specific: writable RAM only 4K starting at 2048
	}
	PC += 1;
}

void cpu_8008::mov_mh()
{
	uint16_t addr;
	addr = Lreg | Hreg << 8;
	if ((addr > 2047) && (addr < RAMTOP)) {
		my_runCPU->KRom_KRam[addr] = Hreg;	// K1000 specific: writable RAM only 4K starting at 2048
	}
	PC += 1;
}

void cpu_8008::mov_ml()
{
	uint16_t addr;
	addr = Lreg | Hreg << 8;
	if ((addr > 2047) && (addr < RAMTOP)) {
		my_runCPU->KRom_KRam[addr] = Lreg;	// K1000 specific: writable RAM only 4K starting at 2048
	}
	PC += 1;
}
