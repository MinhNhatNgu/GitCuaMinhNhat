#include<iostream>
using namespace std;

void slove(int arr[50][50], int n) {
	int d = 0;
	int dn = n - 1;
	int count = 1;
	while (d<=(n/2)) {
		if (d == dn) {
			arr[d][dn] = count;
		}
		for (int i = d; i < dn; i++) {
			arr[d][i] = count;
			count++;
		}
		for (int i = d; i < dn; i++) {
			arr[i][dn] = count;
			count++;
		}
		for (int i = dn; i > d; i--) {
			arr[dn][i] = count;
			count++;
		}
		for (int i = dn; i > d; i--) {
			arr[i][d] = count;
			count++;
		}
		d++; 
		dn--;
	}
	
}

void kq(int arr[50][50], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
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

int main() {
	int arr[50][50];
	int n;
	cout << "nhap so n:";
	cin >> n;
	slove(arr, n);
	kq(arr, n);
	return 0;
}