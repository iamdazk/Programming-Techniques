#include<stdio.h>

void input(int& n);
int sum(int n);
void output(int t);

int main()
{
	int n;
	input(n);
	int t = sum(n);
	output(t);
}

int giaiThua(int n)
{
	int s = 1;
	for (int i = 1; i <= n; i++)
	{
		s = s * i;
	}
	return s;
}

int sum(int n)
{
	int t = 0;
	for (int i=1; i <= n;i++)
	{
		t = t + giaiThua(i);
	}
	return t;
}
void input(int& n)
{
	scanf_s("%d", &n);
 }

void output(int t)
{
	printf("%d", t);
}