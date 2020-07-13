#include<iostream>
#include<math.h>

using namespace std;

int result(int n);

void main()
{
	int n;
	cin >> n;
	cout << result(n);
}

bool isPrime(int n)
{
	if (n < 2)
		return false;
	for (int i = 2; i <= sqrt(n);i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}

int result(int n)
{
	int count = 0;
	for (int i = 1; i < n;i++)
	{
		if (isPrime(i))
			count++;
	}
	return count;
}