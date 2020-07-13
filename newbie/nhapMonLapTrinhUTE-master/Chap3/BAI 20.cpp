#include<iostream>
using namespace std;

int result(int n, int A[])
{
	int min;
	int count = 0;
	int i;
	for (i = 0; i < n; i++)
	{
		if ((A[i]) % 2 == 0)
		{
			min = A[i];
			count++;
			break;
		}
	}
	if (count == 0) return 0;
	for (i = i + 1; i < n; i++)
	{
		if ((A[i] % 2 == 0) && (A[i] < min))
		min = A[i];
	}
	return min;
}

int main()
{
	int n, A[100];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}
	int t = result(n, A);
	cout << t;
}