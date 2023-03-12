#include<iostream> 
using namespace std;

int main() {
	int arr[10][15];
	int r, c;
	int dong=0, cot=0;
	// condition
	do {
		cout << "Nhap so dong(r<10): ";
		cin >> r;
		cout << "Nhap so cot(c<15): ";
		cin >> c;
		if (r < 0 || r>10 || c < 0 || c>15) {
			cout << "Khong hop le!" << endl;
		}

	} while (r<0 || r>10 || c<0 || c>15);
	// input
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cout << "Nhap gia tri arr[" << i + 1 << "][" << j + 1 << "]";
			cin >> arr[i][j];	
		}
	}
	// sum
	
	int sum = 0;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			sum += arr[i][j];
		}
	}
	cout << "sum=" << sum << endl;
	// max
	dong = 0, cot = 0;
	int max = arr[0][0];
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (arr[i][j] > max) {
				max = arr[i][j];
				dong = i;
				cot = j;
			}
		}
	}
	cout << "max=" << max << endl;
	cout << "Vi tri: dong " << dong+1 << ", cot " << cot+1 << endl;
	// min
	dong = 0, cot = 0;
	int min = arr[0][0];
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (arr[i][j] < min) {
				min = arr[i][j];
				dong = i;
				cot = j;
			}	
		}
	}
	cout << "min=" << min << endl;
	cout << "Vi tri: dong " << dong+1 << ", cot " << cot+1 << endl;
	return 0;
}

