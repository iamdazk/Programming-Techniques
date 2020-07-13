#include<iostream>
using namespace std;

int result(int A[], int n)
{
	int max = -10000;
	for (int j = 0; j < n;j++)
	{
		if (A[j] < 0)
		{
			if (A[j] > max)
				max = A[j];
		}		
	}
	return max;
}

void main()
{
	int n;
	cin >> n;
	int A[200];
	for (int i = 0;i < n;i++)
	{
		cin >> A[i];
	}
	int t = result(A, n);
	cout << t;
}