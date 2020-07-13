#include<iostream>
int S[13] = { 31,31,28,31,30,31,30,31,31,30,31,30,31 };

using namespace std;

void input(int& d, int& m, int& y);
bool leapYear(int y);
bool validDay(int d, int m, int y, int S[]);
void nextDay(int& d, int& m, int& y, int S[]);
void output(int d, int m, int y);

int main() {

	int d, m, y;
	input(d, m, y);
	if (validDay(d, m, y, S)) {
		nextDay(d, m, y, S);
		output(d, m, y);
	}
	else
		cout << "Khong hop le";

	return 0;
}

void input(int& d, int& m, int& y) {

	cin >> d >> m >> y;
}

bool leapYear(int y) {

	if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
		return true;
	return false;
}

bool validDay(int d, int m, int y,int S[]) {

	if (leapYear(y))
		S[2]++;
	if (d < 1 || d > S[m] || m < 1 || m > 12 || y <= 0)
		return false;
	else
		return true;
}

void nextDay(int &d, int &m, int &y,int S[]) {

	if (d < S[m])
		d++;
	else {
		d = 1;
		if (m == 12) {
			m = 1;
			y++;
		}
		else 
			m++;
	}

}

void output(int d, int m, int y) {

	cout << d << " " << m << " " << y << '\n';
}