#include<iostream>
using namespace std;

#define SIZE 200


bool isPrime(int n)
{
	if (n < 2) return false;
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}

int result(int A[], int n)
{
	for (int j = n - 1; j >= 0; j--)
	{
		if (isPrime(A[j]))
			return A[j];
	}
	return -1;
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
