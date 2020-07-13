#include<iostream>

using namespace std;

unsigned long long int count( int n) {

	unsigned long long int s = 0;
	unsigned long long int t = 0;
	for (int i = 0; i <= n; i++) {
		t += i;
		s += t;
	}
	return s;
}

int main() {

	int n;
	cin >> n;
	while (n <= 0) {
		cout << "So vua nhap khong hop le, moi nhap lai!";
		cin >> n;
	}
	cout << "Ket qua: " << count(n);
}