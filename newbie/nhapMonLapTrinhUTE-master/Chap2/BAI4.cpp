#include<stdio.h>
void max(int a, int b);
int main() {
	int a, b;
	scanf_s("%d%d", &a, &b);
	max(a, b);
}
void max(int a, int b) {
	if (a > b) printf("Max la %d", a);
	else printf("Max la %d", b);
}