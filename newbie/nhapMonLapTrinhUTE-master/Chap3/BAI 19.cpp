#include<iostream>
using namespace std;

bool soHoanHao(int n)
{
	if (n < 2) return false;
	int count = 0;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
			count += i;
	}
	if (n == count) return true;
	else return false;
}

int result(int n, int A[])
{
	int min;
	int count = 0;
	int i;
	for ( i = 0; i < n; i++)
	{
		if (soHoanHao(A[i]))
		{
			min = A[i];
			count++;
			break;
		}
	}
	if (count == 0) return 0;
	for (i = i + 1; i < n; i++)
	{
		if ((soHoanHao(A[i])) && ((A[i]) < min))
			min = A[i];
	}
	return min;
	
}

int main()
{
	int n,A[100];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}
	int t = result(n, A);
	cout << t;
}