#include<iostream>
#define SIZE 100

using namespace std;

void input(int& n, int arr[]) {

	cout << "Nhap vao so luong: ";
	cin >> n;
	cout << "Nhap vao mang: ";
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

}

int gcd(int a, int b) {
	
	if (b == 0) return a;
	return gcd(b, a % b);

}

int gcdInArray(int n, int arr[]) {

	int UCLN;
	for (int i = 0; i < (n-1); i++) {
		UCLN = gcd(arr[i], arr[i + 1]);
	}
	return UCLN;

}

int main() {

	int n,arr[SIZE];
	input(n, arr);
	int result = gcdInArray(n, arr);
	cout << "UCLN cua day: " << result;

}