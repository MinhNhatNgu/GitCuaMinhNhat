#include<iostream>
using namespace std;

int slove( int n, int temp=0) {
	if (n == 0) return temp;
	else {
		temp = n%10 + temp * 10;
		return slove(n / 10, temp);
	}
	
}

int main() {
	int n;
	do {
		cout << "Nhap so nguyen duong n:";
		cin >> n;
		if (n <= 0) cout << "Khong hop le!" << endl;
	} while (n <= 0);
	cout << "So dao nguoc cua " << n << " la: " << slove(n) << endl;
	return 0;
}