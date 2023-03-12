#include<iostream>
using namespace std;

int sum_chan(int n, int sum=0) {
	if (n == 0) return sum;
	if ((n % 10) % 2 == 0) return n % 10 + sum_chan(n / 10, sum);
	else return sum_chan(n / 10, sum);
}

int sum_le(int n, int sum = 0) {
	if (n == 0) return sum;
	if ((n % 10) % 2 != 0) return n % 10 + sum_le(n / 10, sum);
	else return sum_le(n / 10, sum);
}

int main() {
	int n;
	cout << "Nhap so n:"; 
	cin >> n;
	cout << "Tong cac chu so chan la: " << sum_chan(n) << endl;
	cout << "Tong cac chu so le la: " << sum_le(n) << endl;
	return 0;
}