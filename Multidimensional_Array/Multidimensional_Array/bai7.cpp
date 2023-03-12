#include<iostream>
#include<iomanip>
using namespace std;

void input(int arr[50][50], int r, int c) {
	cout << "Nhap mang so nguyen :";
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> arr[i][j];
		}
	}
}

void output(int arr[50][50], int r, int c) {
	cout << "Mang so nguyen la: " << endl;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (arr[i][j] < 10) {
				cout << arr[i][j] << "   ";
			}
			else {
				cout << arr[i][j] << "  ";
			}
		}
			cout << endl;
	}
}

double tbcong(int arr[50][50], int r, int c) {
	double sum = 0;
	double count = 0;
	double tbcong;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			sum += arr[i][j];
			count++;
		}
	}
	tbcong = sum / count;
	cout <<  "Trung binh cong cua mang la: " << setprecision(4) << fixed << tbcong << endl;
	return 0;
}



int main() {
	int arr[50][50];
	int r, c;
	cout << "Nhap so dong:";
	cin >> r;
	cout << "Nhap so cot:";
	cin >> c;
	input(arr, r, c);
	output(arr, r, c);
	tbcong(arr, r, c);
	return 0;
}