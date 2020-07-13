#include<iostream>
using namespace std;

#define SIZE 200

bool soHoanHao(int n)
{
	if (n < 2) return false;
	int count = 0;
	for (int i = 1;i < n;i++)
	{
		if (n % i == 0)
			count += i;
	}
	if (n == count) return true;
	else return false;
}

int result(int A[], int n)
{
	for (int j = n-1; j >= 0;j--)
	{
		if (soHoanHao(A[j]))
			return A[j];
	}
	return 0;
}

void main()
{
	int n;
	cin >> n;
	int A[SIZE];
	for (int i = 0;i < n;i++)
	{
		cin >> A[i];
	}
	int t = result(A, n);
	cout << t;
}