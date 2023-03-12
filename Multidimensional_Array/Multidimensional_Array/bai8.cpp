#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void input(int arr[50][50], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = rand() % 10;
		}
	}
}

void output(int arr[50][50], int n) {
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

void sum(int arrA[50][50], int arrB[50][50], int n) {
	int arrC[50][50];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arrC[i][j] = arrA[i][j] + arrB[i][j];
		}
	}
	cout << "Tong hai ma tran A va B la: " << endl;
	output(arrC, n);
}

void mul(int arrA[50][50], int arrB[50][50], int n) {
	int arrC[50][50];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int sum = 0;
			for (int k = 0; k < n; k++) {
				sum += arrA[i][k] * arrB[k][j];
			}
			arrC[i][j]=sum;
		}
	}
	cout << "Tich hai ma tran A va B la:" << endl;
	output(arrC, n);
}

int main() {
	int arrA[50][50];
	int arrB[50][50];
	int n;
	srand(time(NULL));
	cout << "Ma tran vuong cap:";
	cin >> n;
	cout << "Ma tran A:" << endl;
	input(arrA, n);
	output(arrA, n);
	cout << endl;
	cout << "Ma tran B:" << endl;
	input(arrB, n);
	output(arrB, n);
	cout << endl;
	sum(arrA, arrB, n);
	cout << endl;
	mul(arrA, arrB, n);
	return 0;
}