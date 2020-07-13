#include<iostream>
using namespace std;
 
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

int maxIsprime(int n, int A[])
{
	int max;
	int count = 0;
	int j;
	for (j = 0; j < n; j++)
	{
		if (isPrime(A[j]))
			count++;
		max = A[j];
		break;
	}

	if (count == 0) return 0;
	
	for (j = j + 1;j < n;j++)
	{
		if ((isPrime(A[j])) && (max < A[j]))
			max = A[j];
	}
	return max;
}

void main()
{
	int n,A[200];
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		cin >> A[i];
	}
	int t = maxIsprime(n, A);
	cout << t;
}