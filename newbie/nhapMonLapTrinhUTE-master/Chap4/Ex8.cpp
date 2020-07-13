#include<iostream>

using namespace std;

void input(int& year) {

	cin >> year;
}

bool checkLeapYear(int year) {

	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		return true;
	else
		return false;
}

void output(int year) {

	if (checkLeapYear(year))
		cout << year << " is a leap year";
	else 
		cout << year << " is not a leap year";
}

int main() {

	int year;
	input(year);
	checkLeapYear(year);
	output(year);
}