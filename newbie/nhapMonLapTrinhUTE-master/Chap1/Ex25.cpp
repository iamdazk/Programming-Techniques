#include<iostream>
using namespace std;

int tinhTong(int n);
int giaiThua(int n);
float result(int n);

void main()
{
	int n;
	cin >> n;
	result(n);
	cout << result(n); 
}

int tinhTong(int n)
{
	int s = 0;
	for (int i = 1;i <= n;i++)
	{
		s = s + i;
	}
	return s;
}

int giaiThua(int n)
{
	int t = 1;
	for (int i = 1; i <= n;i++)
	{
		t = t * i;
	}
	return t;
}

float result(int n)
{
	float s = 0;
	for (int i = 1; i <= n;i++)
	{
		s += (float)tinhTong(i) / giaiThua(i);
	}
	return s;
}