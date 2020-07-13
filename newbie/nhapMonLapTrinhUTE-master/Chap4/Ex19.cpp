#include<iostream>

using namespace std;

void input(int& h, int& m, int& s) {

	cin >> h >> m >> s;
}

void onesAfterNow(int h, int m, int s) {
	
	if (h >= 0 && h <= 23 && m >= 0 && m <= 59 && s >= 0 && s <= 59) {
		if (s == 59) {
			if (m == 59) {
				if (h == 23) {
					cout << "0:0:0";
				}
				else {
					cout << h + 1 << ":" << "0:0";
				}
			}
			else {
				cout << h << ":" << m + 1 << ":" << "00";
			}
		}
		else {
			cout << h << ":" << m << ":" << s + 1;
		}
	}
	else {
		cout << "Khong phai bo ba gio phut giay hop le";
	}
}

int main() {

	int h, m, s;
	input(h, m, s);
	onesAfterNow(h, m, s);

	return 0;
}