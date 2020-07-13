#include<stdio.h>
void result(float a);
void main() {
	float a;
	scanf_s("%f", &a);
	result(a);
}
void result(float a){
	int b;
	b = int(a);
	printf("%d", b);
}
