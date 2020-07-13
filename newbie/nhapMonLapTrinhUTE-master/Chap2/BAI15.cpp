#include<stdio.h>
void tamGiac(float a, float b, float c);
void main() {
	float a, b, c;
	scanf_s("%f%f%f", &a, &b, &c);
	tamGiac(a, b, c);
}
void tamGiac(float a, float b, float c) {
	if ((a + b > c) && (a + c > b) && (b + c > a) && (a>0) &&(b>0)&&(c>0)) {
		if ((a == b) && (b == c) && (a == c)) printf("Tam giac deu");
		else if ((a == b) || (b == c) || (a == c)) printf("Tam giac can");
		else if (((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a)) && ((a == b) || (a == c) || (b == c)))
			printf("Tam giac vuong can");
		else if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a)) 
			printf("Tam giac vuong");
	}
	else printf("Khong phai tam giac");
}
