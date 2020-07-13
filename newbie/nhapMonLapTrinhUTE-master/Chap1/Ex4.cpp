#include<iostream>

using namespace std;

void input(int& a, int& b); 
int maxValue(int a, int b);
void output(int t);

int main() {

	int a, b;
	input(a, b);
	int t = maxValue(a, b);
	output(t);
}

void input(int& a, int& b) {

	cin >> a >> b;
}

int maxValue(int a, int b) {

	int max = a;
	if (b > max)
		max = b;
	return max;

}

void output(int t) {

	cout << t;
}