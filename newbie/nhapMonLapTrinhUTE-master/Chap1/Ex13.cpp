#include<stdio.h>

bool isPrime(int n);
int result(int n);

void main()
{
	int n;
	scanf_s("%d", &n);
	int t = result(n);
	printf("%d", t);
}

int result(int n)
{
	int count = 0;
	while (n > 0)
	{
		int t = n % 10;
		if (isPrime(t)) count ++;
		n = n / 10;
	}
	return count;
}

bool isPrime(int n)
{
	if (n == 1) return false;
	for (int i = 2;i < n;i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}