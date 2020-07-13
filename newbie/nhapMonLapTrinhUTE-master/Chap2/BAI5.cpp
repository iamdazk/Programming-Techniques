#include<stdio.h>
void result(int h, int m, int s);
int main() {
	int h, m, s;
	scanf_s("%d%d%d", &h, &m, &s);

	result(h, m, s);
}
void result(int h, int m, int s) {
	if ((0 <= h) && (h <= 23) && (0 <= m) && (m <= 59) && (0 <= s) && (s <= 59))
		printf("Bo ba gio phut giay hop le");
	else printf("Khong phai bo ba gio phut giay hop le");
}