#include<stdio.h>

void input(int& a, int& b, int& n);
int result(int a, int b, int n);
void output(int s);

int main()
{
	int a, b, n;
	input(a, b, n);
	int t = result(a, b, n);
	output(t);
}

int result(int a, int b, int n)
{
	int i;
	int s = 0;
	for (i=1;i < n;i++)
	{
		if ((i % a == 0) && (i % b != 0))
			s = s + i;
	}
	return s; 
}
 
void input(int& a, int& b, int &n)
{
	scanf_s("%d%d%d", &a, &b, &n);
}

void output(int s)
{
	printf("%d", s);
}