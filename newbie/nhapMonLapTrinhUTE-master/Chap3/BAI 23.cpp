#include<iostream>
using namespace std;

bool uoc(int n)
{
	
}

int result(int n, int A[])
{
	int count = 0;
	int max;
	int i;
	for (i = 0; i < n; i++)
	{
		if (uoc(A[i]))
		{
			max = A[i];
			count++;
			break;
		}
	}
	if (count == 0)
		return 0;
	for (i = i + 1; i < n; i++)
	{
		if ((uoc(A[i])) && (A[i] > max))
			max = A[i];
	}
	return max;
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