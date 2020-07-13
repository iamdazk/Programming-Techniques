#include<iostream>

using namespace std;

void input(int& a, int& b, int& c) {

	cin >> a >> b >> c;
}

bool validTriangle(int a, int b, int c) {

	if (a > 0 && b > 0 && c > 0 && (a + b > c) && (b + c > a) && (a + c > b))
		return true;
	else
		return false;
}

void output(int a, int b, int c) {

	if (validTriangle(a, b, c))
		cout << a << " " << b << " " << c << " is valid triangle";
	else 
		cout << a << " " << b << " " << c << " is not valid triangle";
}

int main() {

	int a, b, c;
	input(a, b, c);
	validTriangle(a, b, c);
	output(a, b, c);

	return 0;
}

