#include<iostream>

using namespace std;

void input(int& month, int& year) {
	
	cin >> month >> year;
}

bool checkLeapYear(int year) {

	if ( (( year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		return true;
	else
		return false;
}

void countDayInMonth(int month, int year) {

	switch (month) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		cout << month << "/" << year << " has 31 days";
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		cout << month << "/" << year << " has 30 days";
		break;
	case 2:
		if(checkLeapYear(year))
			cout << month << "/" << year << " has 29 days";
		else
			cout << month << "/" << year << " has 28 days";
	}
}

int main() {

	int month, year;
	input(month, year);
	countDayInMonth(month, year);

	return 0;
}