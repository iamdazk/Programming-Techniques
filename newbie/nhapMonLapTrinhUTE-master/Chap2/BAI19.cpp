#include<stdio.h>
void nghiemPTbacnhat(int a, int b);
int main() {
	int a, b;
	scanf_s("%d%d", &a, &b);
	nghiemPTbacnhat(a, b);
}
void nghiemPTbacnhat(int a, int b) {
	if (a != 0)
	{
		float t;
		t = -float(b) / a;
		printf("%.2f", t);
	}
	else printf("PT vo nghiem");
}