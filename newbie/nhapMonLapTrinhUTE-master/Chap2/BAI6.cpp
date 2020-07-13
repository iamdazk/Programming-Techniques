#include<stdio.h>
void result(float a, float b, float c);
int main() {
	float a, b, c;
	scanf_s("%f%f%f", &a, &b, &c);
	result(a, b, c);
}
void result(float a, float b, float c) {
	if ((a + b > c) && (a + c > b) && (b + c > a) && (a > 0) && (b > 0) && (c > 0))
		printf("Do dai 3 canh tam giac");
	else printf("Khong phai do dai 3 canh tam giac");
}
