#include<stdio.h>
void result(int a, int b, int c, int d);
int main() {
	int a, b, c, d;
	scanf_s("%d%d%d%d", &a, &b, &c, &d);
	result(a, b, c, d);
}
void result(int a,int b,int c,int d) {
	if ((a > b) && (a > c) && (a > d)) printf("%d la max", a);
	else if ((b > a) && (b > c) && (b > d)) printf("%d la max", b);
	else if ((c > a) && (c > b) && (c > d)) printf("%d la max", c);
	else if ((d > a) && (d > b) && (d > c)) printf("%d la max", d);
}