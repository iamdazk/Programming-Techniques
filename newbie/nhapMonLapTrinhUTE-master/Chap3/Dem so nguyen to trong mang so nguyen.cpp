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

int countIsPrime(int A[], int n)
{
	int count = 0;
	for (int j = 0;j < n;j++)
	{
		if (isPrime(A[j]))
			count++;
	}
	return count;
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
	int t = countIsPrime(A, n);
	cout << t;
}

