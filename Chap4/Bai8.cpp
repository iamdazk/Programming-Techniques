#include<iostream>
#define SIZE 99
using namespace std;

void input(int &n,int arr[]){

	cout << "Nhap vao so luong: ";
	cin >> n;
	cout << "Nhap vao mang: ";
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

}

bool isPrime(int n) {

	if (n <= 2)
		return false;
	for (int i = 2; i <= n / 2; i++) {
		if (n % i == 0)
			return false;
	}
	return true;

}

int firstIsPrime(int n,int arr[]) {
	
	for (int i = 0; i < n; i++) {
		if (isPrime(arr[i])) {
			return arr[i];
		}
	}
}

int minIsPrime(int n, int arr[]) {

	int min = firstIsPrime(n, arr);
	for (int i = 0; i < n; i++) {
		if (isPrime(arr[i]) && arr[i] < min)
			min = arr[i];
	}
	return min;

}

int main() {

	int n,arr[SIZE];
	input(n, arr);
	cout << "So nguyen to nho nhat trong day: " << minIsPrime(n, arr);

}