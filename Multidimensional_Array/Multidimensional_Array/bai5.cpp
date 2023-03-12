#include<iostream>
using namespace std;

int main() {
	int arr[10][10];
	int n;
	int phu = 0;
	int chinh = 0;
	cout << "Ma tran vuong cap: ";
	cin >> n;
	cout << "Nhap ma tran: " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "Nhap phan tu arr[" << i + 1 << "][" << j + 1 << "]: " ;
			cin >> arr[i][j];
			
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j) {
				chinh += arr[i][j];
			}
			if (n - 1 == i + j) {
				phu += arr[i][j];
			}

		}
	}

	cout << "Tong cheo chinh la: " << chinh << endl;
	cout << "Tong cheo phu la: " << phu << endl;
	return 0;
}