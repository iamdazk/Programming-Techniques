#include<iostream>

using namespace std;

long double result(int n) {

	long double s = 0;
	long double t = 1;
	for (int i = 1; i <= n; i++) {
		t *= i;
		s += 1/t;
	}
	return s;
}

int main() {
	int n;
	cin >> n;
	while (n <= 0) {
		cout << "So vua nhap khong hop le, moi nhap lai: ";
		cin >> n;
	}
	cout << "Ket qua: " << result(n);
}