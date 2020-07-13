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

bool soChinhPhuong(int x)
{
	if (x < 2)
		return false;
	int m;
	m = (int)sqrt(x);
	for (int i = 2; i < x; i++)
	{
		if (m - sqrt(x) == 0)
		{
			return true;
		}
	}
	return false;
}

int result(int n)
{
	int count = 0;
	for (int i = 1; i < n;i++)
	{

		if (soChinhPhuong(i))
			count++;
	}
	return count;
}