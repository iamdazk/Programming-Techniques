#include<iostream>
using namespace std;

int result(int n);

void main()
{
	int n;
	cin >> n;
	result(n);
	cout << result(n);
}

int result(int n)
{
	int max = 0;
	for (int i = 1;i <= n;i++)
	{
		if ((n % i == 0) && (i % 2 == 1) && (i > max))
			max = i;
	}
	return max;
}