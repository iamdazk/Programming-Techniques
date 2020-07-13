#include<iostream>
#define SIZE 50

using namespace std;

void input(int& n, int arr[]) {

	cout << "Nhap vao so luong: ";
	cin >> n;
	cout << "Nhap vao mang: ";
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}

void output(int n, int arr[]) {

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}


void them1PhanTu(int& n, int arr[]) {

	int x, k;
	cout << "Nhap vao vi tri can them: ";
	cin >> k;
	cout << "Nhap vao so can them o vi tri " << k << ": ";
	cin >> x;
	for (int i = n-1; i >= k; i--) {
		arr[i+1] = arr[i];
		arr[k] = x;
		n++;
	}
	cout << "Mang sau khi da them: \n";
	output(n, arr);
	cout << endl;
}

void xoa1PhanTu(int& n, int arr[]) {
	
	int k;
	cout << "Nhap vao vi tri can xoa: ";
	cin >> k;

	for (int i = k; i < n; i++) {
		arr[i] = arr[i+1];
		n--;
	}
	output(n, arr);
	cout << endl;
}

int timKiem1PhanTu(int n, int arr[],int k) {

	arr[n] = k;
	int i = 0;
	while (arr[i] != k) i++;
	if (i < n)
		return i;
	return -1;
}


int main() {

	int n, arr[SIZE];
	input(n, arr);
	them1PhanTu(n, arr);
	xoa1PhanTu(n, arr);
	int k;
	cin >> k;
	cout << "Vi tri phan tu " << k << " la: " << timKiem1PhanTu(n, arr,k);
	return 0;

}