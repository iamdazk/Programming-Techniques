#include<stdio.h>
void result(int a, int b, int c);
int main() {
	int a, b, c;
	scanf_s("%d%d%d", &a, &b, &c);
	result(a, b, c);
}
void result(int a, int b, int c) {
	if ((a < b) && (a < c)) printf("Min la %d", a);
	if ((b < c) && (b < a)) printf("Min la %d", b);
	if ((c < a) && (c < b)) printf("Min la %d", c);
}