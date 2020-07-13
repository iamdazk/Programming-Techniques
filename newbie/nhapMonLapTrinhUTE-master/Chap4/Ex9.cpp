#include<iostream>
#include<iomanip>
using namespace std;

void input(int& a, int& b) {

	cin >> a >> b;
}

void timNghiemPTBacNhat(int a, int b) {

	if (a == 0) {
		if (b == 0) 
			cout << "PT vo so nghiem";
		else 
			cout << "PT vo nghiem";
	}
	else {
		float result = float(-b) / a;
		cout << fixed << setprecision(2) << result;
	}
}

int main() {

	int a, b;
	input(a, b);
	timNghiemPTBacNhat(a, b);

	return 0;
}