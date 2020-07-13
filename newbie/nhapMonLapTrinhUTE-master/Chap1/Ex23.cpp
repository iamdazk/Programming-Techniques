#include<iostream>
using namespace std;

int result(int n);


int main()
{
	int n;
	cin >> n;
	cout << result(n);
}


bool soNguyenTo(int s)
{
	for (int m = 2;m < s;m++)
	{
		if (s % m == 0)
			return false;
	}
	return true;
}

int result(int n)
{
	int count = 0;
	for (int i = 2;i < n;i++)
	{
		if (n % i == 0 && soNguyenTo(i))
			count++;
	}
	return count;
}