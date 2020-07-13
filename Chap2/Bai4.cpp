#include<iostream>
#define capacity 100

using namespace std;

void input(int& m, int& n, int arr[][capacity]) {

	cout << "Nhap vao so dong: ";
	cin >> m;
	cout << "Nhap vao so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
}

void gopMang(int m, int n, int arr[][capacity]) {

	int arr1[1000];
	int k = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
				arr1[k++] = arr[i][j];
		}
	}

	cout << "Chuyen thanh mang 1 chieu: ";
	for (int l = 0; l < k; l++) {
		cout << arr1[l] << " ";
	}
	
}

int main() {

	int m, n, arr[capacity][capacity];
	input(m, n, arr);
	gopMang(m, n, arr);
	return 0;
}

