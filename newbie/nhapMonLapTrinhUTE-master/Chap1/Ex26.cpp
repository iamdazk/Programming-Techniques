#include<iostream>
using namespace std;

void result(long int n);

void main()
{
	long int n;
	cin >> n;
	result(n);
}

void result(long int n)
{
	long int a0 = 1;
	long int a1 = 1;
	cout << a0 << " " << a1 << " ";
	for (int i = 2; i < n;i++)
	{
		long int s = a0 + a1;
		cout << s << " ";
		a0 = a1;
		a1 = s;
	}
}