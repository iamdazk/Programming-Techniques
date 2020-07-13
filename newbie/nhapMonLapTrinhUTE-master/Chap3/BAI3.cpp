#include<iostream>
using namespace std;

#define i 1000

int result(int n,int A[i]);

void main()
{
	int n;
	cin >> n;
	int A[i];
	int t = result(n, A);
	cout << t;
}

int result(int n,int A[i])
{
	int max = 0;
	for (int j = 0; j < n;j++)
	{
		cin >> A[j];
		if (A[j] > max)
			max = A[j];
	}
	return max;
}