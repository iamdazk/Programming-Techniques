#include<iostream>
#define capacity 100
using namespace std;


int main() {
	int m, int n, int arr[capacity];
	cin >> m >> n;
	int k = m * n;
	int arr1[capacity][capacity];
	for (int i = 0; i < k; i++) {
		cin >> arr[i];
	}
	for (int j = 0; j < m; j++) {
		for (int k = 0; k < n; k++) {
			for (int l = 0; l < k; l++) {
				arr1[j][k] = arr[k];
			}
		}
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr1[i][j];
		}
		cout << "\n";
	}
}