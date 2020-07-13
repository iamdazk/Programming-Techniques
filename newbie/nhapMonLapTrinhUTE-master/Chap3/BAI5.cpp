#include<iostream>
using namespace std;

#define i 3000

float result(int n, int A[i]);

void main()
{
	int n;
	cin >> n;
	int A[i];
	float t = result(n, A);
	cout << t;
}

float result(int n, int A[i])
{
	int t = 0;
	float m;
	int s = 0;
	int count = 0;
	for (int j = 0;j < n;j++)
	{
		cin >> A[j];
		if (A[j] % 5 == 0)
		{
			t = A[j];
			count++;
		}
		s = s + t;
	}
	m = (float)s / count;
	return m;
}