 #include<stdio.h>
void result(int a, int b);
int main() {
	int a, b;
	scanf_s("%d%d", &a, &b);
	result(a, b);
}
void result(int a, int b) {
	int t;
	t = a + b;
	printf("%d", t);
}
