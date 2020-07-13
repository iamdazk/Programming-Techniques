#include<iostream>
using namespace std;


bool soHoanhao(int n)
{
	int t = 0;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
			t = t + i;
	}
	if (t == n) return true;
	else return false;
}

int result(int n)
{
	int count = 0;
	for (int i = 1; i < n; i++)
	{
		if (soHoanhao(i))
			count++;
	}
	return count;
}

void main()
{
	int n;
	cin >> n;
	cout << result(n);
};