#include<iostream>
#define SIZE 50

using namespace std;

int totalArray(int n, int arr[]) {
	if (n == 0)
		return -1;
	if (n == 1)
		return arr[0];
	if (n > 1)
		return arr[n-1] + totalArray((n - 1), arr);
}

int main() {
	int n, arr[SIZE];
	cout << "Nhap so luong: ";
	cin >> n;
	cout << "Nhap mang: ";
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << "Tong mang: " << totalArray(n, arr);
}