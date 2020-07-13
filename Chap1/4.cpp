#include<iostream>
using namespace std;

void saochep(int n, int arr[]) {
	int arr2[200];
	for (int i = 0; i < n; i++) {
		arr2[i] = arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr2[i] << " ";
	}
}

int main()
{
	int n, arr[200];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	saochep(n, arr);
}
