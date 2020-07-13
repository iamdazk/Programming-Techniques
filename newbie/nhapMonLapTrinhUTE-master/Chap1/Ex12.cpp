#include<stdio.h>

void main()
{
	int n;
	scanf_s("%d", &n);
	int max = 0;
	while (n > 0)
	{
		int t = n % 10;
		n = n / 10;
		if (t > max)
			max = t;
	}
	printf("%d", max);
}