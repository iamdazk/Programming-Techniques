#include<stdio.h>

void tinhThuong(int a, int b);

int main() {
	int a, b;
	scanf_s("%d%d", &a, &b);
	tinhThuong(a, b);
}

void tinhThuong(int a, int b) {
	float t;
	if (b != 0) {
		t = float(a) / b;
		printf("%.2f", t);
	}
	else printf("Khong chia duoc");
}