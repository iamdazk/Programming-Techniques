#include<iostream>
using namespace std;

#define SIZE 200

int result(int A[], int n)
{
	for (int j = 0; j < n; j++)
	{
		if (A[j] < 0)
			return A[j];
	}
	return 1;
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