#include<stdio.h>
void result(int month, int year);
int main() {
	int month, year;
	scanf_s("%d%d", &month, &year);
	result(month, year);
}
void result(int month, int year) {
	switch (month) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("31");
		break;
	case 2:
	{
		if ((year % 100 != 0) && (year % 4 == 0) || (year % 400 == 0))
			printf("29");
		else printf("28");
		break;
	}
	}
	 

}