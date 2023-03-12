#include<iostream> 
using namespace std;

void input(int n, int m, int arr[10][10]) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}
}

void output(int n, int m, int arr[10][10]) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << arr[i][j] << "  ";
		}
		cout << endl;
	}
}

void tich(int n, int m, int a[10][10], int n1, int m1, int b[10][10]) {
	int c[10][10];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m1; j++) {
			int temp = 0;
			for (int k = 0; k < m; k++) {
				temp += (a[i][k] * b[k][j]);
			}
			c[i][j] = temp;
		}
	}
	cout << "Tich 2 ma tran la: " << endl;
	output(n, m1, c);
}

void tong(int n, int m,int a[10][10],int b[10][10]) {
	int c[10][10];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	cout << "Tong 2 ma tran la: " << endl;
	output(n, m, c);
}

int main() {
	int c[10][10];
	int n, m, a[10][10];
	cout << "MA TRAN A" << endl;
	cout << "nhap so dong: ";
	cin >> n;
	cout << "nhap so cot: ";
	cin >> m;
	input(n, m, a);

	int n1, m1, b[10][10];
	cout << "MA TRAN B" << endl;
	cout << "nhap so dong: ";
	cin >> n1;
	cout << "nhap so cot: ";
	cin >> m1;
	input(n1, m1, b);

	if (n == n1 && m == m1) {
		tong(n, m, a, b);
	}
	else {
		cout << "Tong Khong hop le!" << endl;
	}

	if (m == n1) {
		tich(n, m, a, n1, m1, b);
	}
	else {
		cout << "Tich Khong hop le!" << endl;
	}

	return 0;
}