#include<iostream>
#include<cmath>
using namespace std;

int s1(int n) {
	if (n == 1) return n;
	if (n > 1) {
		return n + s1(n-1);
	}
}

int s2(int n) {
	if (n == 1) return 1;
	if (n > 1) {
		return pow(n, 2) + s2(n - 1);
	}
}

double s3(double n) {
	if (n == 1) return 1;
	if (n > 1) {
		return 1 / n + s3(n - 2);
	}
}

int giaithua(int n) {
	if (n == 0) return 1;
	if (n > 0) {
		return n * giaithua(n - 1);
	}
}

int s4(int n) {
	if (n == 1) return 1;
	if (n > 1) {
		return giaithua(n) + s4(n - 1);
	}
}

int main() {
	int n;
	
	do {
		
		cout << "Nhap so nguyen duong le: ";
		cin >> n;
		if (n <= 0 || n % 2 == 0) {
			cout << "Khong hop le!" << endl;
		}

	} while (n <= 0|| n%2==0);

	cout << "S1= " << s1(n) << endl;
	cout << "S2= " << s2(n) << endl;
	cout << "S3= " << s3(n) << endl;
	cout << "S4= " << s4(n) << endl;
	return 0;
}