#include<iostream>
#include<math.h>

using namespace std;

void result(int n);

void main()
{
	int n;
	cin >> n;
	result(n);
}

bool soChinhphuong(int n)
{
	if (n < 2) return false;
	int t;
	t = int(sqrt(n));
	if (t - sqrt(n) == 0)
	{
	return true;
	}
	return false;
} 

void result(int n)
{
	for (int i = 1; i < n;i++)
	{
		if (soChinhphuong(i))
			cout << i << endl;
	}
}