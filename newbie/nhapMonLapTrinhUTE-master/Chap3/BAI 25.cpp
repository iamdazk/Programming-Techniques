#include<iostream>
using namespace std;

int min(int n, int A[])
{
	int min = A[0];
	int vitri = 0;
	for (int i = 1; i < n; i++)
	{
		if (A[i] < min)
		{
			min = A[i];
			vitri = i;
		}
	}
	return vitri;
}

int max(int n, int A[])
{
	int max = A[0];
	int vitri = 0;
	for (int i = 1; i < n; i++)
	{
		if (A[i] > max)
		{
			max = A[i];
			vitri = i;
		}
	}
	return vitri;
}

void result(int n,int A[])
{
	int t = min(n, A);
	int s = max(n, A);
	int m = A[t];
	A[t] = A[s];
	A[s] = m;
}

void main()
{
	int n, A[100];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}
	result(n, A);
	for (int i = 0; i < n; i++)
	{
		cout << A[i] << " ";
	}
}