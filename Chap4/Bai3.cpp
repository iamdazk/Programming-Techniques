#include<iostream>

using namespace std;

int giaiThua(int n) {

	if (n == 1)
		return 1;
	else
		return n * giaiThua(n - 1);
}

int main() {
	int n;
	cin >> n;
	if (n <= 0) {
		cout << "So vua nhap khong hop le, moi nhap lai: ";
		cin >> n;
	}
	cout << "Tong giai thua: " << giaiThua(n);
}