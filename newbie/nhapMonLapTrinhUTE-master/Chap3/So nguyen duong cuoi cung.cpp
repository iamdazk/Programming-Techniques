#include<iostream>
using namespace std;

#define SIZE 200

int result(float A[], int n)
{
	
	for (int j = n - 1; j >= 0; j--)
	{
		if (A[j] > 0)
			return A[j];
	}
	return -1;
}

void main()
{
	int n;
	cin >> n;
	float A[SIZE];
	for (int i = 0;i < n;i++)
	{
		cin >> A[i];
	}
	int t = result(A, n);
	cout << t;
}