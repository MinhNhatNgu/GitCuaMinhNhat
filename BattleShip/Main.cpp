#include <iostream>
using namespace std;

int main() {
	// Tạo ma trận Ship 4x4 
	bool ships[4][4] = {
		{0 , 1 , 0 , 0},
		{0 , 0 , 1 , 0},
		{1 , 0 , 1 , 0},
		{0 , 0 , 0 , 0}
	};
	// Khai báo biến 
	int hits = 0; // Số lượt đoán trúng Ship
	int turns = 0; // Số lượt đã sử dụng 
	int row, column; // Khai báo dòng, cột 
	// Tạo vòng lặp
	while (hits < 4) { 
		// Lấy dl tọa độ 
		cout << "chon toa do:" << endl;

		cout << "nhap so dong ( tu 1 den 4 )" << endl;
		cin >> row;
		
		cout << "nhap so cot ( tu 1 den 4 )" << endl;
		cin >> column;
		// kiểm tra tọa độ nhập vào 
		if (ships[row][column]) { 
			cout << "Great!" << endl;
			ships[row][column] = 0; // Nếu đoán đúng thì gán Ship = 0 để kh bị lặp lại 
			hits++; 
			cout << "So Ship con lai: " << 4 - hits << endl; // Hiển thị số Ship còn lại 
		}
		else {
			cout << "Miss!" << endl;
		}
		turns++;  // Đếm lượt đã sử dụng 
	}
	// Trả kết quả 
	cout << "Chien thang!!!" << endl;
	cout << "So luot da su dung: " << turns << endl;
	return 0;
}