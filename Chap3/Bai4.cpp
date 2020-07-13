#include<iostream>

using namespace std;

unsigned long long int result(int n) {

	unsigned long long s = 0;
	unsigned long long t = 1;
	for (int i = 1; i <= n; i++) {
		t *= i;
		s += t;
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