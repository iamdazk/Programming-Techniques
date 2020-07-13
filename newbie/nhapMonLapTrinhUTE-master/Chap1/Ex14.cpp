#include<stdio.h>

bool evennumber(int n)
{
	
	for (int i = 1;i < n;i++)
	{
		if (n % 2 == 0)
			return true;
	}
	return false;
	
}

int result(int n)
{
	while (n > 0)
	{
		int t = n % 10;
		if (!evennumber(t))
		{
			return false;
		}
		n /= 10;
	}
	return true;
}



void input(int& n)
{
	scanf_s("%d", &n);
}

void output(bool t)
{
	if (t) printf("true");
	if (!t) printf("false");
}

int main()
{
	int n;
	input(n);
	bool t = result(n);
	output(t);
}

