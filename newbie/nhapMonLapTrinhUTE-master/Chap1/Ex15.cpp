#include<iostream>
using namespace std;

bool decrease(int n)
{
	while ( n > 0)
	{
		int t = n % 10;
		n /= 10;
		int s = n % 10;
		if (s < t)
			return false;
	}
	return true;
}

bool increase(int n)
{
	while (n > 0)
	{
		int t = n % 10;
		n /= 10;
		int s = n % 10;
		if (s > t)
			return false;
	}
	return true;
}

void main()
{
	int n;
	cin >> n;
	if (increase(n) || decrease(n))
		cout << " true ";
	else cout << " false ";
}