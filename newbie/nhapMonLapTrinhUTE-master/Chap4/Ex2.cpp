#include<iostream>

using namespace std;

void input(int& a, int& b);
int countTotal(int a, int b);
void output(int t);

int main() {

	int a, b;
	input(a, b);
	int t = countTotal(a, b);
	output(t);

	return 0;
}

void input(int& a, int& b) {

	cin >> a >> b;
}

int countTotal(int a, int b) {

	int t = a + b;
	return t;

}

void output(int t) {

	cout << t;
}