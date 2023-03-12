#include<iostream>
using namespace std;

int fibonacci(int n) {
	int f0 = 0;
	int f1 = 1;
	int fn=n;
	if (n == 0) return 0;
	if (n == 1) return 1;
	if (n > 1) {
		return fibonacci(n - 2) + fibonacci(n - 1);
	}

}

int main() {
	int n;
	do {
		cout << "Nhap so nguyen duong (n>=2):";
		cin >> n;
		if (n < 2) {
			cout << "Khong hop le!" << endl;
		}
	} while (n < 2);
	cout << "So fibonacci cua f" << n << " la: " << fibonacci(n) << endl;
	return 0;
}