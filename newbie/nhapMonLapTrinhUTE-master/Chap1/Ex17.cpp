#include<stdio.h>

void result(int n);

int main()
{
	int n;
	scanf_s("%d", &n);
	result(n);
}

bool isPrime(int n)
{
	for (int i = 2; i < n/2 ;i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}

void result(int n)
{
	int max = n;
	int count = 0;
	for (int i = 1; i < n; i++)
	{
		if (isPrime(i))
			printf("%d ", i);
	}
}