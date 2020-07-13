#include<iostream>
using namespace std;

float result(float A[], float n)
{
	float max;
	int count = 0;
	int j;
	for ( j = 0; j < n; j++)
		if (A[j] < 0)
		{
			count++;
			max = A[j];
			break;
		}
	if (count == 0)
		return 0;
	for (j = j + 1;j < n;j++)
	{
		if ((A[j] < 0) && (max < A[j]))
			max = A[j];
	}
	return max;
}

int main()
{
	float n;
	cin >> n;
	float A[200];
	for (int i = 0;i < n;i++)
	{
		cin >> A[i];
	}
	float t = result(A, n);
	cout << t;
}