#include<stdio.h>

void input(int& n);
int result(int n);
void output(int m, int n);


int main()
{
	int n;
	input(n);
	int m = result(n);
	output(m,n);
}

int result( int n)
{
	int i = 1;
	int t;
	int m = 0;
	while (n > 0)
	{
		t = n % 10;
		m = (m * 10) + t;
		n = n / 10;
	}
	return (m);
}

void input(int& n)
{
	scanf_s("%d", &n);
}

void output(int m, int n)
{
	if (m == n) printf("true");
	else printf("false");
}