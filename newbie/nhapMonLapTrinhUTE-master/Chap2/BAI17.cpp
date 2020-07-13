#include<stdio.h>
#include<math.h>
void result(float a);
int main() {
	float a;
	scanf_s("%f", &a);
	result(a);
}
void result(float a) {
	int t;
	int b;
	t = int(a);
	if (a - t >= 0.5) b = ceil(a);
	if (a - t <= 0.4) b = floor(a);
	printf("%d", b);
}