#include<iostream>
using namespace std;
 
void slove(int arr[50][50], int n) {
	int d = 0;
	int count = 1;
	while (d <= 4) {
		for (int i = 0; i < n; i++) {
			arr[i][d] = count;
			count++;
		}
		d++;
		for (int i = n - 1; i >= 0; i--) {
			arr[i][d] = count;
			count++;
		}
		d++;
	}
}

void kq(int arr[50][50], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr[i][j] << "  ";
		}
		cout << endl;
	}
}

int main() {
	int n, arr[50][50];
	int count = 1;
	cout << "Nhap so n(1<n<10)";
	cin >> n;
	slove(arr,n);
	kq(arr,n);
	return 0;
}