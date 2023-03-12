#include <fstream>
#include <iostream>
#include <nlohmann/json.hpp>
#include <string>
#include <ctime>
#include <stdlib.h>

using namespace std;
using json = nlohmann::json;

int choose;

int random(int a, int b);
int getChoose(int a, int b);
int menu();
int choose_menu();
void nhapsp();

int main() {
    srand(time(NULL));
    menu();
    choose_menu();
    
    return 0;
}

int menu() {
    cout << "======== MENU ========" << endl;
    cout << "1. Nhap san pham" << endl;
    cout << "2. Tim kiem san pham" << endl;
    cout << "3. Xoa san pham" << endl;
    cout << "4. Xuat don hang" << endl;
    cout << "5. Kiem tra kho" << endl;
    return 0;
}

int choose_menu() {
    choose = getChoose(1, 5);

    if (choose == 1) {
        system("cls");
        nhapsp();
    }
    if (choose == 2) {

    }
    if (choose == 3) {

    }
    if (choose == 4) {

    }
    return 0;
}

void nhapsp() {
    int choose;
    cout << "1. Iphone" << endl;
    cout << "2. Macbook" << endl;
    cout << "Nhan [0] de tro ve menu" << endl;
    choose = getChoose(1,2);

    if (choose == 1) {
        system("cls");
        cout << "1. Iphone7" << endl;
        cout << "2. IphoneX" << endl;
    }

    
}

int random(int a, int b) {
    return a + rand() % (b - a + 1);
}

int getChoose(int a, int b) {
    int num;
    bool trueValue = false;
    while (!trueValue) {
        cout << "Lua chon cua ban (" << a << "-" << b << ") :";
        cin >> num;
        if (num == 0) {
            system("cls");
            return menu(), choose_menu();
        }
        if (cin.fail() || num < a || num > b) {
            cout << "Khong hop le! Vui long nhap lai" << endl;
            cin.clear();
            cin.ignore(100, '\n');
        }
        else {
            trueValue = true;
        }
    }
    return num;
}

/*
    fstream ifs;
    ifs.open("data.json");
    json j = json::parse(ifs);
    cout << j["Iphone"]["IpX"] << endl;
*/