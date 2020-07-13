#include<iostream>
#include<iomanip>

using namespace std;

void input(int& a, int& b) {

	cin >> a >> b;
}

int tinhThuong(int a, int b,float &result) {

	if (b == 0)
		return 0;
	else {
		result = float(a)/ b;
		return 1;
	}
}

void output(int flag,float result) {

	if (flag == 0)
		cout << "Khong chia duoc";
	else
		cout << setprecision(2) << fixed << result;
}

int main() {

	int a, b;
	input(a, b);
	float result;
	int flag = tinhThuong(a, b,result);
	output(flag,result);
}

