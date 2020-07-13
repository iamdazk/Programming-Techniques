#include<stdio.h>
void result(int h, int m, int s);
int main() {
	int h, m, s;
	scanf_s("%d%d%d", &h, &m, &s);
	result(h, m, s); // result: bo ba gio phut giay
}
void result(int h, int m, int s) {
	if (s == 59)
	{
		if (m == 59)
		{
			if (h == 23)
				printf("0 0 0");
			else printf("%d 0 0", h + 1);
		}
		else printf("%d %d 0", h, m + 1);
	}
	else printf("%d %d %d", h, m, s+ 1);
}