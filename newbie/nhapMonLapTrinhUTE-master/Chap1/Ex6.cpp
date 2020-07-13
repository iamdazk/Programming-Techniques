#include<stdio.h>
#include<math.h>
void soChinhphuong(int n);
int main(){
	int n;
	scanf_s("%d", &n);
	soChinhphuong(n);
}
void soChinhphuong(int n) {
	int t;
	t = (int)sqrt(n);
	if (sqrt(n) - t==0)
		printf("%d la so chinh phuong", n);
	else
		printf("%d khong phai la so chinh phuong", n);
}

