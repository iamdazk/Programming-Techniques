#include<iostream>

using namespace std;

int F(int n) {
	if (n <= 2)
		return 1;
	return F(n - 1) + F(n - 2);
}

int main() {
	int n;
	cin >> n;
	cout << "Gia tri phan tu thu " << n << " trong day Fibonacci: " << F(n);
}