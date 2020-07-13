#include<stdio.h>
void result(int a);
int main() {
	int a; // a = year
	scanf_s("%d", &a);
	result(a);
}
void result(int a) {
	if (((a % 100 != 0) && (a % 4 == 0)) || (a % 400 == 0))
		printf("Nam %d la nam nhuan", a);
	else printf("Nam %d khong phai la nam nhuan", a);
}
