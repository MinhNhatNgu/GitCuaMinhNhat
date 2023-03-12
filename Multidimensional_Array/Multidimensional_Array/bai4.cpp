#include<iostream> 
using namespace std;

int main() {
	//condition
	int r, c;
	int arr[5][6];
	do {
		cout << "Nhap so dong: ";
		cin >> r;
		cout << "Nhap so cot: ";
		cin >> c;
		if (r < 0 || r>5 || c < 0 || c>6) {
			cout << "Khong hop le!" << endl;
		}
	} while (r < 0 || r>5 || c < 0 || c>6);

	// input 
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cout << "Nhap gia tri arr[" << i + 1 << "][" << j + 1 << "]";
			cin >> arr[i][j];
		}
	}

	// sum theo dong/cot 
	int choose;
	int sum = 0;
	int dong, cot;
	cout << "Tinh tong theo (chon 1-2) : " << endl;
	cout << "1.Dong" << endl;
	cout << "2.Cot" << endl;
	cin >> choose;
	if (choose == 1) {
		do {
			cout << "Nhap vi tri dong (0<r<=5):";
			cin >> dong;
			if (dong < 0 || dong>5) {
				cout << "Dong khong hop le!" << endl;
			}
		} while (dong < 0|| dong>5);
		for (int i = 0; i < c; i++) {
			sum += arr[dong-1][i];
		}
		cout << "Tong dong thu " << dong << " la: " << sum << endl;
	}
	if (choose == 2) {
		do {
			cout << "Nhap vi tri cot (0<r<=6):";
			cin >> cot;
			if (cot < 0 || cot>6) {
				cout << "Cot khong hop le!" << endl;
			}
		} while (cot < 0 || cot>6);
		for (int i = 0; i < r; i++) {
			sum += arr[i][cot-1];
		}
		cout << "Tong cot thu " << cot << " la: " << sum << endl;
	}

	//tim x
	int x;
	int count = 0;
	cout << "Nhap gia tri x: ";
	cin >> x;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (arr[i][j] == x) {
				count++;
				cout << "Vi tri: dong " << i + 1 << ", cot " << j + 1 << endl;
			}
		}
	}
	cout << "So lan xuat hien cua x la: " << count;

	return 0;
}