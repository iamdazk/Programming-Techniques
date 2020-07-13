#include<stdio.h>

void input(int &n);
int soHoanhao(int n);
void output(int s, int n);

int main()
{
	int n;
	input(n);
	int s = soHoanhao(n);
	output(s,n);
}

int soHoanhao(int n)
{
	int i;
	int s = 0;
	for (i = 1;i < n;i++)
	{
		if (n % i == 0)
			s = s + i;
	}
	return s;
}

void input(int &n)
{
	scanf_s("%d", &n);
}

void output(int s, int n)
{
	if (n == s) printf("True";
	else printf("False");
}