#include<iostream>
using namespace std;

bool result(int n, int A[])
{
	for (int i = 0; i < (n - 1); i++)
	{
		if (A[i] >= A[i + 1])
			return false;
	}
	return true;
}

void main()
{
	int n, A[100];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}
	cout << result(n, A);
}