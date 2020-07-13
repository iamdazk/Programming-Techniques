#include<stdio.h>
void Max2nd(int a, int b, int c);
int main() {
	int a, b, c;
	scanf_s("%d%d%d", &a, &b, &c);
	Max2nd(a, b, c);
}
void Max2nd(int a, int b, int c) {
	if (((a > b) && (a < c)) || ((a < b) && (a > c))) printf("%d la so nho nhi", a);
	if (((c > b) && (c < a)) || ((c < b) && (c > a))) printf("%d la so nho nhi", c);
	if (((b > a) && (b < c)) || ((b < a) && (b > c))) printf("%d la so nho nhi", b);
}
