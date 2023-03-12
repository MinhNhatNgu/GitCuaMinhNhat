#include <iostream>
#include <string>
#include <fstream>
#include <conio.h>
using namespace std;
string tk, mk;
string choose;

// Function khai bao
int first_menu();
int choose_first_menu();
int second_menu();
int choose_second_menu();
int dang_nhap();
int dang_ki();

void xemtkb();
void taotkb();
void suatkb();
void xoatkb();

void week();
void day();
void subject();
void classname();
void room();
void session();
void time();

void checkdate();


//Struct tkb
struct thoikhoabieu {
	string week;
	string day;
	string subject;
	string classname;
	string room;
	string session;
	string time;
};
thoikhoabieu tkb;


void taotkb() {
	ofstream outfile;
	outfile.open("text.txt", ios::trunc);
	week();
	day();
	subject();
	classname();
	session();
	room();
	time();
	outfile << tkb.week << "" << tkb.day << " " << tkb.subject << " " << tkb.classname << " " << tkb.room << " " << tkb.session << " " << tkb.time << endl;
	outfile.close();

}

// Main
int main() {
	first_menu();
	choose_first_menu();
	system("pause");
	return 0;
}

//Function defitied
int first_menu() {
	cout << "======XIN CHAO======" << endl;
	cout << "1. Dang nhap " << endl;
	cout << "2. Dang ki " << endl;
	cout << "3. Ket thuc " << endl;
	cout << "____________________" << endl;
	return 0;
}

int choose_first_menu() {
	cout << "Nhap lua chon cua ban: ";
	cin >> choose;
	if (choose == "1") {
		dang_nhap();
	}
	else if (choose == "2") {
		dang_ki();
		return first_menu(), choose_first_menu();
	}
	else if (choose == "3") {
		return 0;
	}
	else {
		cout << "Khong hop le!" << endl << endl;
		return choose_first_menu();
	}
}

int second_menu() {
	cout << "======MENU======" << endl;
	cout << "1. Xem tkb " << endl;
	cout << "2. Tao tkb " << endl;
	cout << "3. Sua tkb " << endl;
	cout << "4. Xoa tkb " << endl;
	cout << "5. Thoat " << endl;
	cout << "____________________" << endl;
	return 0;
}

int choose_second_menu() {
	cout << "Nhap lua chon cua ban: ";
	cin >> choose;
	if (choose == "2") {
		system("cls");
		taotkb();
	}
	else {
		cout << "Khong hop le!" << endl << endl;
	}
	return 0;
}
	
int dang_nhap() {
	string datatk[100];
	string datamk[100];
	string press;

	cout << endl << "======DANG NHAP======" << endl;
	cout << "Nhap tai khoan: ";
	cin >> tk;
	cout << "Nhap mat khau: ";
	cin >> mk;

	// lay du lieu tu file
	ifstream infile;
	infile.open("account.txt", ios::in);
	infile >> datatk[0];
	infile >> datamk[0];
	infile.close();

	// ktra tk mk
	if (tk == datatk[0] && mk == datamk[0]) {
		cout << "Dang nhap thanh cong!" << endl << endl;
		return second_menu(),choose_second_menu();
	}
	else {
		cout << "!!!Dang nhap that bai " << endl << endl;
		do {
			cout << "Nhan 0 de tro lai menu, nhan 1 de tiep tuc dang nhap" << endl;
			cin >> press;
			if (press == "0") {
				system("cls");
				return first_menu(), choose_first_menu();
			}
			else if (press == "1") {
				system("cls");
				return dang_nhap();
			}
			else {
				cout << "Khong lop le!" << endl << endl;
			}
		} while (1);
	}
}

int dang_ki() {
	//ghi du lieu vao file 
	string text;
	ofstream outfile;
	outfile.open("account.txt", ios::out | ios::trunc);

	cout << endl << "======DANG KI======" << endl;
	cout << "Nhap tai khoan moi: ";
	cin >> text;
	outfile << text;
	outfile << endl;
	cout << "Nhap mat khau moi: ";
	cin >> text;
	outfile << text;
	outfile.close();

	cout << "Dang ki thanh cong!" << endl;
	cout << endl;
	cout << "Nhan phim bat ki de tiep tuc!!!" << endl;
	_getch();
	system("cls");
	return 0;
}

void week() {
	system("cls");
	cout << "CHON TUAN ( tu tuan1 den tuan58 ): " << endl;
	cin >> choose;
	if (choose >= "1" && choose <= "58") {
		tkb.week = "tuan" + choose;
	}
	else {
		cout << "Khong hop le!" << endl;
		cout << "Nhan phim bat ki de tiep tuc" << endl;
		_getch();
		return week();
	}
}
void day() {
	system("cls");
	cout << "Nhap ngay/thang/nam: " << endl;
	int d, m, y, DayMax;
	cin >> d >> m >> y;
	
	//check 
	if (y < 1582) {
		cout << "Nam khong duoc xac dinh!";
		goto KetThuc;
	}

	if (m < 1 || m>12) {
		cout << "Thang khong hop le!";
		goto KetThuc;
	}

	switch (m) {
	case 4:
	case 6:
	case 9:
	case 11:
		DayMax = 30;
		break;
	case 2:
		DayMax = 28 + ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0);
		break;
	default:
		DayMax = 31;
	}

	if (d<1 || d>DayMax) {
		cout << "Ngay khong hop le!";
		goto KetThuc;
	}

	// Cong thuc Zeller
	y -= (14 - m) / 12;
	m += 12 * ((14 - m) / 12) - 2;
	DayMax = (d + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12) % 7;

	if (!DayMax) {
		cout << "\nChu nhat";
	}
	else {
		cout << "\nThu " << DayMax + 1;
	}

KetThuc:
	cout << endl;
}
void subject() {
	system("cls");
	cout << "CHON MON: " << endl;
	cout << "[1]. CSLT \t [2]. NMTH \t [3]. DSTT" << endl;
	cout << "Nhap lua chon cua ban: ";
	cin >> choose;
	if (choose == "1") {
		tkb.subject = "CSLT";
	}
	else if (choose == "2") {
		tkb.subject = "NMTH";
	}
	else if (choose == "3") {
		tkb.subject = "DSTT";
	}
	else {
		cout << "Khong hop le!" << endl;
		cout << "Nhan phim bat ki de tiep tuc" << endl;
		_getch();
		return subject();
	}
}
void classname() {
	system("cls");
	cout << "CHON LOP: " << endl;
	cout << "[1]. CS01 \t [2]. CS02 \t [3]. IT01 \t [4]. IM01" << endl;
	cout << "Nhap lua chon cua ban: ";
	cin >> choose;
	if (choose == "1") {
		tkb.classname = "CS01";
	}
	else if (choose == "2") {
		tkb.classname = "CS02";
	}
	else if (choose == "3") {
		tkb.classname = "IT01";
	}
	else if (choose == "4") {
		tkb.classname = "IM01";
	}
	else {
		cout << "Khong hop le!" << endl;
		cout << "Nhan phim bat ki de tiep tuc" << endl;
		_getch();
		return classname();
	}
}
void room() {
	system("cls");
	cout << "CHON PHONG: " << endl;
	cout << "[1].Phong li thuyet \t [2].Phong thuc hanh" << endl; 
	cout << "Nhap lua chon cua ban: ";
	cin >> choose;
	if (choose == "1") {
		cout << "Nhap so phong: " << endl;
		cout << "tang1: 101 -> 108" << endl;
		cout << "tang2: 201 -> 208" << endl;
		cout << "tang3: 301 -> 305" << endl;
		cout << "Lua chon cua ban: "; 
		cin >> choose;
		if ((choose >= "101" && choose <= "108")||(choose >= "201" && choose <= "208")||(choose >= "301" && choose <= "305")) {
			tkb.room = choose;
		}
		else {
			cout << "Khong hop le!" << endl;
			cout << "Nhan phim bat ki de tiep tuc" << endl;
			_getch();
		}
	}
	else if (choose == "2") {
		cout << "Nhap so phong: " << endl;
		cout << "tang4: 401 -> 408" << endl;
		cout << "tang5: 501 -> 507" << endl;
		cout << "Lua chon cua ban: ";
		cin >> choose;
		if ((choose >= "401" && choose <= "408") || (choose >= "501" && choose <= "507")) {
			tkb.room = choose;
		}
		else {
			cout << "Khong hop le!" << endl;
			cout << "Nhan phim bat ki de tiep tuc" << endl;
			_getch();
		}
	}

}
void session() {
	system("cls");
	cout << "CHON BUOI: " << endl;
	cout << "[1].Sang \t [2].Chieu" << endl;
	cout << "Nhap lua chon cua ban: ";
	cin >> choose;
	if (choose == "1") {
		tkb.session = "Sang";
	}
	else if (choose == "2") {
		tkb.session = "Chieu";
	}
	else {
		cout << "Khong hop le!" << endl;
		cout << "Nhan phim bat ki de tiep tuc" << endl;
		_getch();
		return session();
	}
}
void time() {
	system("cls");
	string start, end;
	cout << "Nhap thoi gian ( tu 1h den 24h ): " << endl;
	cout << "Thoi gian bat dau: ";
	cin >> start;
	cout << "Thoi gian ket thuc: ";
	cin >> end;
	if (start < end && start >= "1" && start <= "24" && end >= "1" && end <="24") {
		tkb.time = start + "h-" + end + "h";
	}
	else {
		cout << "Khong hop le" << endl;
		cout << "Nhan phim bat ki de tiep tuc" << endl;
		_getch();
		return time();
	}
}