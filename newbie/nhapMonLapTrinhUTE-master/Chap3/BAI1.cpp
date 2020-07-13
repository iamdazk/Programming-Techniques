#include<iostream>
using namespace std;

#define size 9999
void result(int n, int A[size]);

void main()
{
	int n;
	cin >> n;
	int A[size];
	result(n,A);
}

void result(int n, int A[size])
{
	for (int j = 0;j < n;j++)
	{
		cin >> A[j];
	}

	for (int i = 0;i < n;i++)
	{
		cout << A[i] << " ";
	}
}
