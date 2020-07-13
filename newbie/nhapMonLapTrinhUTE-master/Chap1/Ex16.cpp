#include<iostream>
using namespace std;

int result(int a, int b)
{
	int t;
	if (a == 0 || b == 0)
	{
		t = a + b;
		return t;
	}

	while (a != b)
	{
		if (a > b) a -= b;
		else b -= a;
	}
	t = a;
	return t;
}

int main()
{
	int a, b;
	cin >> a >> b;
	int t = result(a, b);
	cout << t;
}