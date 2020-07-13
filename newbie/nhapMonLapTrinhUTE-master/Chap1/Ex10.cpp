#include<stdio.h>

void input(int& n);
int result(int n);
void output(int b);

int main()
{
	int n;
	input(n);
	int b = result(n);
	output(b);
}

int result(int n)
{
	int i = 1;
	int t, b;
	b = 0;
	while ( n > 0 )
	{
		t = n % 10;
		b = (b * 10) + t;
		n = n / 10 ;
	}
	return b;
}

void input(int& n)
{
	scanf_s("%d", &n);
}

void output(int b)
{
	printf("%d", b);
}