#include<stdio.h>
#include<math.h>
void result(int a);
int main() {
	int a;
	scanf_s("%d", &a);
	result(a);
}
void result(int a) {
	int t;
	t = abs(a);
	printf("%d", t);
}