#include<iostream>
using namespace std;

int countnum(int n) {
	if (n / 10 == 0) return 1;
	else return 1+countnum(n / 10);
}

int main() {
	int n;
	do {
		cout << "Nhap so nguyen duong: ";
		cin >> n;
		if (n <= 0) cout << "Khong hop le!" << endl;
	} while (n <= 0);
	cout << "So chu so cua " << n << " la: " << countnum(n);

	return 0;
}