#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime> 
using namespace std;

void menu() {

}

void ghe(char arr[14][11]) {
	char countchar = 'A';
	char num='1';
	for (int i = 5; i < 11; i++) {
		arr[0][i] = countchar;
		countchar++;
	}

	for (int i = 1; i < 14; i++) {
		for (int j = 0; j < 5; j++) {
			if (j == 0) arr[i][j] = 'H';
			if (j == 1) arr[i][j] = 'a';
			if (j == 2) arr[i][j] = 'n';
			if (j == 3) arr[i][j] = 'g';
			if (j > 3) {
				arr[i][j] = num;
				num++;
			}
		}
	}
	
}

void output(char arr[14][11]) {
	for (int i = 0; i < 14; i++) {
		for (int j = 0; j < 11; j++) {
			if (j < 4) {
				cout << arr[i][j];
			}
			else {
				cout << arr[i][j] << "  ";
			}
		}
		cout << endl;
	}
}

int main() {
	char arr[14][11];
	ghe(arr);
	output(arr);
	return 0;
}