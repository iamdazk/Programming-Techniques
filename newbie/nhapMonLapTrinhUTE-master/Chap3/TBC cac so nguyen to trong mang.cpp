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

float result(int A[],int n)
{
	int count = 0;
	int sum = 0;
	for (int i = 0;i<n;i++)
	{
		if (isPrime(A[i]))
		{
			sum += A[i];
			count++;
		}
	}
	float t = (float)sum / count;
	return t;
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
	float t = result(A, n);
	cout << t;
}