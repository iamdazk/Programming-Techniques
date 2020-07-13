#include<iostream>
#include<cstring>

using namespace std;

void input(char& a) {

	cin >> a;
}

char doiKiTu(char a) {

	if (a >= 65 && a <= 90)
		a += 32;
	else
		a -= 32;
	return a;
}

void output(char t) {

	cout << t;
}

int main() {

	char a;
	input(a);
	char t = doiKiTu(a);
	output(t);
}