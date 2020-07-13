#include<iostream>

using namespace std;

void input(int& a, int& b, int& c) {

	cin >> a >> b >> c;
}

int findMax(int a, int b, int c) {

	int max = a;
	if (b > max)
		max = b;
	if (c > max)
		max = c;
	return max;
}

void output(int temp) {

	cout << "Max value: " << temp;
}

int main() {

	int a, b, c;
	input(a, b, c);
	int temp = findMax(a, b, c);
	output(temp);
}