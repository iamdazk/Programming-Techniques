#include<stdio.h>
void Chuvi(float a, float b);
int main() {
	float a, b;
	scanf_s("%f%f", &a, &b);
	Chuvi(a, b);
}
void Chuvi(float a,float b){
	float t;
	t = (a + b) / 2;
	printf("%.2f", t);
}
