#include<iostream>

using namespace std;

void input(int& h, int& m, int& s) {

	cin >> h >> m >> s;
}

bool checkValidTime(int h, int m, int s) {

	if (h >= 0 && h <= 23 && m >= 0 && m <= 59 && s >= 0 && s <= 59)
		return true;
	else 
		return false;
}

void output(int h, int m, int s) {

	if (checkValidTime(h, m, s))
		cout << h << ":" << m << ":" << s << " is valid time";
	else 
		cout << h << ":" << m << ":" << s << " is not valid time";
}

int main() {

	int h, m, s;
	input(h, m, s);
	int t = checkValidTime(h, m, s);
	output(h, m, s);
}

