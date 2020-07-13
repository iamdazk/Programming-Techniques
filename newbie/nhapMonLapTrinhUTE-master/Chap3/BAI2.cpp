#include<iostream>
using namespace std;

#define i 100

float result(float n, float A[i]);

void main()
{
	float n;
	cin >> n;
	float A[i];
	float t = result(n,A);
	cout << t;
}

float result(float n, float A[i])
{
	float s = 0;
	for (int j = 0;j < n;j++)
	{
		cin >> A[j];
		s = s + A[j];
	}
	return s;
}