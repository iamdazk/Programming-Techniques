#include <iostream>
#include <cmath>

using namespace std;

struct date {
	int day;
	unsigned month;
	unsigned year;
};


void input_date(date& date1) {
	cin >> date1.day >> date1.month >> date1.year;
}

void output_date(date date1) {
	cout << date1.day << "/" << date1.month << "/" << date1.year << " ";
}

void input(date& date1, date& date2, int dayOfMonth[]) {
	cout << "Nhap vao ngay thu nhat: ";
	input_date(date1);
	cout << "Nhap vao ngay thu hai: ";
	input_date(date2);
}

bool isLeapYear(unsigned year) {
	return (year % 4 == 0 || (year % 400 == 0 && year % 100 != 0));
}

bool ngayHopLe(date date1, int dayOfMonth[]) {
	int temp = (isLeapYear(date1.year) && date1.month == 2) ? 1 : 0;
	bool validYear = date1.year >= 0;
	bool validMonth = date1.month >= 1 && date1.month <= 12;
	bool validDay = date1.day >= 1 && date1.day <= dayOfMonth[date1.month + 1] + temp;
	return (validDay && validMonth && validYear);
}


int sttNgayTrongNam(date date1, int dayOfMonth[]) {

	for (int i = 1; i <= 12; i++) {
		dayOfMonth[i] += dayOfMonth[i - 1];
	}

	int result = date1.day; 
	result += dayOfMonth[date1.month];
	if (isLeapYear(date1.year) && date1.month >= 2) {
		result++;
	}
	return result;

}

int sttTu111(date date1, int dayOfMonth[]) {

	int result = date1.day;
	result += dayOfMonth[date1.month];
	result += (date1.year - 1) * 365 + (date1.year - 1) / 4 + (date1.year - 1) / 400 - (date1.year - 1) / 100;
	if (isLeapYear(date1.year) && date1.month > 2) {
		result++;
	}
	return result;
}

int kcNgay(date date1, date date2, int dayOfMonth[]) {
	int day1 = sttTu111(date1, dayOfMonth);
	int day2 = sttTu111(date2, dayOfMonth);
	int result = day2 - day1;
	return result;
}

date kDay_before(date date1, int dayOfMonth[], int k) {
	date result = date1;
	while (k > 0) {
		int temp = result.day;
		result.day -= k;
		k -= temp;
		if (result.day <= 0) {
			k++;
			result.month--;
			if (result.month <= 0) {
				result.month = 12;
				result.year--;
			}
			result.day = dayOfMonth[result.month + 1];
		}
	}
	return result;
}

date kDay_after(date date1, int dayOfMonth[], int k) {
	date result = date1;
	while (k > 0) {
		int temp = result.day;
		result.day += k;
		if (result.day > dayOfMonth[result.month + 1]) {
			k -= dayOfMonth[result.month + 1] - temp + 1;
			result.day = 1;
			result.month++;
			if (result.month > 12) {
				result.month = 1;
				result.year++;
			}
		}
		else {
			k -= result.day - temp;
		}
	}
	return result;
}

bool dungTruoc(date date1, date date2, int dayOfMonth[]) {
	return (sttTu111(date1, dayOfMonth) - sttTu111(date2, dayOfMonth) > 0);
}


int main() {
	int dayOfMonth[14] = { 0,0,31,28,31,30,31,30,31,31,30,31,30,31 };
	date date1, date2;
	input(date1, date2, dayOfMonth);

	if (isLeapYear(date1.year)) {
		output_date(date1);
		cout << "la mot ngay trong nam nhuan";
	}

	else {
		output_date(date1);
		cout << "la mot ngay trong nam thuong";
	}
	cout << endl;

	if (isLeapYear(date2.year)) {
		output_date(date2);
		cout << " la mot ngay trong nam nhuan";
	}
	else {
		output_date(date2);
		cout << " la mot ngay trong nam thuong";
	}
	cout << endl;

	int k;
	cout << "Nhap vao k:";
	cin >> k;

	cout << k << " ngay sau ";
	output_date(date1);
	cout << "la: ";
	output_date(kDay_after(date1, dayOfMonth, k));
	cout << endl;

	cout << k << " ngay truoc ";
	output_date(date1);
	cout << "la: ";
	output_date(kDay_before(date1, dayOfMonth, k));

	cout << endl;
	output_date(date1);
	cout << "la ngay thu: " << sttNgayTrongNam(date1, dayOfMonth) << " trong nam" << endl;
	output_date(date1);
	cout << "la ngay thu: " << sttTu111(date1, dayOfMonth) - 366 << " ke tu ngay 1/1/1" << endl;

	cout << "Khoang cach tu ";
	output_date(date1);
	cout << "den ";
	output_date(date2);
	cout << "= " << abs(kcNgay(date1, date2, dayOfMonth)) << endl;

	if (dungTruoc(date1, date2, dayOfMonth)) {
		output_date(date2);
		cout << "nam truoc ";
		output_date(date1);
		cout << endl;
	}
	else {
		output_date(date1);
		cout << "nam truoc ";
		output_date(date2);
		cout << endl;
	}

}