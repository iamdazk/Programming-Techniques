#include<iostream>
#define SIZE 50
using namespace std;

int minArray(int n, int arr[]) {
	if (n == 0)
		return -1;
	if (n == 1)
		return arr[0];
		else
		{
			if (arr[n - 1] < minArray((n-1), arr))
				return arr[n - 1];
			else
				return minArray((n-1),arr);
		}
}

int main() {
	int n, arr[SIZE];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << minArray(n, arr);
}