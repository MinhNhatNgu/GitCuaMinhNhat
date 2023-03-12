#include<iostream>
using namespace std;

int pow(int x, int n) {
	if (n == 1) return x;
	return x * pow(x, n - 1);
}

int main() {
	int n, x;
	cout << "x^n voi: " << endl;
	cout << "x="; cin >> x;
	cout << "n="; cin >> n;
	cout << "x^n =" << pow(x, n) << endl;
	return 0;
}