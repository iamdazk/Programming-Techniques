#include<iostream>
#include<cmath>

using namespace std;

void input(int& n);
int absoluteValue(int n);
void output(int t);

int main() {

	int n;
	input(n);
	int t = absoluteValue(n);
	output(t);

	return 0;
}

void input(int& n) {
	
	cout << "Input: ";
	cin >> n;
}

int absoluteValue(int n) {

	int t = abs(n);
	return t;
}

void output(int t) {

	cout << "Absolute Value: " << t;
}