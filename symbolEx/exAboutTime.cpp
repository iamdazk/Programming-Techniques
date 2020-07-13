#include<iostream>

using namespace std;

/*
	Nhập/Xuất ngày / tháng / năm
	Kiểm tra năm nhuận
	Tính STT ngày trong năm
	tính STT ngày kể từ 1/1/1
	Tính ngày trước đó , sau đó K ngày
	Tính khoảng cách giữa 2 ngày
	So sánh 2 ngày
*/

typedef struct date {
	int day;
	int month;
	int year;
};

void input_date(date &date1){
	cout << "Nhap vao thoi gian: ";
	cin >> date1.day >> date1.month >> date1.year;
}

void output_date(date date1) {
	cout << date1.day << "/" << date1.month << "/" << date1.year;
}

bool isLeapYear(int year) {
	return (year % 4 == 0 || (year % 400 == 0 && year % 100 != 0));
}

int sttNgayTrongNam(date date1,int dateofMonth[]) {
	
	for (int i = 2; i <= 14; i++) {
		dateofMonth[i] += dateofMonth[i - 1];
	}
	int result = date1.day; 
	result += dateofMonth[date1.month]; 
	if (isLeapYear(date1.year) && date1.month >= 2) {
		result++; 
	}
	return result;
}

int sttTu111(date date1, int dateofMonth[]) {
	int result = date1.day;
	result += dateofMonth[date1.month];
	result += (date1.year - 1) * 365 + (date1.year - 1) / 4 + (date1.year - 1) / 400 - (date1.year - 1) / 100;
	if (isLeapYear(date1.year) && date1.month > 2)
		result++;
	return result;
}

int dayDifference(date date1, date date2, int dateofMonth[]) {

	if (sttTu111(date1, dateofMonth) > sttTu111(date2, dateofMonth))
		return (sttTu111(date1, dateofMonth) - sttTu111(date2, dateofMonth));
	else
		return (sttTu111(date2, dateofMonth) - sttTu111(date1, dateofMonth));
}

date kDay_before(date date1, int dateofMonth[], int k) {
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
			result.day = dateofMonth[result.month + 1];
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

bool isAfter(date date1, date date2, int dayOfMonth[]) {
	return ((sttTu111(date1, dayOfMonth) - sttTu111(date2, dayOfMonth)) > 0);
}

int main() {
	int dateofMonth[15] = {0,0,31,28,31,30,31,30,31,31,30,31,30,31 };
	date date1, date2;

	input_date(date1);
	input_date(date2);

	if (isLeapYear(date1.year))
	{
		output_date(date1);
		cout << " la ngay trong nam nhuan";
	}
	else
	{
		output_date(date1);
		cout << " la ngay trong nam thuong";
	}
	cout << endl;

	int result1 = sttNgayTrongNam(date1,dateofMonth);
	output_date(date1);
	cout << " la ngay thu " << result1 << " trong nam";
	cout << endl;
	int result2 = sttTu111(date1, dateofMonth);
	output_date(date1);
	cout << " la ngay thu " << result2 << " ke tu ngay 1/1/1 ";
	cout << endl;

	int k;
	cout << "Nhap vao k: ";
	cin >> k;
	date result3 = kDay_before(date1, dateofMonth, k);
	cout << k << " ngay truoc ";
	output_date(date1);
	cout << ": ";
	output_date(result3);
	cout << endl;
	date result4 = kDay_after(date1, dateofMonth, k);
	cout << k << " ngay sau ";
	output_date(date1);
	cout << ": ";
	output_date(result4);
	cout << endl;

	cout << "Khoang cach giua 2 ngay la: ";
	cout << dayDifference(date1, date2, dateofMonth);
	cout << endl;

	if (isAfter(date1, date2, dateofMonth)){

		output_date(date2);
		cout << " la ngay truoc ";
		output_date(date1);
	}
	else {

		output_date(date1);
		cout << " la ngay truoc ";
		output_date(date2);
	}

}