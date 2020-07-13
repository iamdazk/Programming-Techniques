#include<iostream>
#include<cmath>

using namespace std;

void input(int& x, int& p) {
	cout << "Nhap vao so: ";
	cin >> x;
	cout << "Nhap vao so mu: ";
	cin >> p;
}

double result(int x, int p) {
	return pow(x, p);
}

int main() {
	
	int x,p;
	input(x, p);
	cout << x << " mu " << p << ": " << result(x, p);
	return 0;
}