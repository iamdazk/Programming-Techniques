#include<iostream>

using namespace std;

void input(int& a, int& b, int& c) {

	cin >> a >> b >> c;
}

int max(int a, int b, int c) {

	int max = a;
	if (max < b)
		max = b;
	if (max < c)
		max = c;
	return max;
}

int min(int a, int b, int c) {

	int min = a;
	if (min > b)
		min = b;
	if (min > c)
		min = c;
	return min;
}

int findMax2nd(int a, int b, int c) {

	int t = a + b + c;
	return t - min(a, b, c) - max(a, b, c);
}

void output(int temp) {

	cout << "Max 2nd value: " << temp;
}

int main() {

	int a, b, c;
	input(a, b, c);
	int temp = findMax2nd(a, b, c);
	output(temp);
	
	return 0;
}