#include<iostream>
using namespace std;

int isPrime(int n)
{
	if (n < 2) return 1; // 1 = n khong la so nguyen to
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
			return 1;
	}
	return 0; // 0 = n la so nguyen to 
}

void main()
{
	int n; 
	cin >> n;
	int t = isPrime(n); 
	cout << t;
}