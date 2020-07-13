#include<iostream>
#define capacity 100
using namespace std;

void input(int& n, int arr[],int &k) {

	cout << "Nhap so luong: ";
	cin >> n;
	cout << "Nhap vao mang: ";
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cin >> k;
}

int findANumbber(int n, int arr[],int k) {

	arr[n - 1] = k;
	int i = 0;
	while (arr[i] != k) i++;
	if (i < k)
		return i;
	return -1;
}

int main() {


	int n, arr[capacity],k;
	input(n, arr, k);
	cout << "Vi tri so can tim: " << findANumbber(n, arr, k);
	return 0;
}