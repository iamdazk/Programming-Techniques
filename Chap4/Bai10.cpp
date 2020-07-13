#include<iostream>
#define SIZE 100

using namespace std;

void input(int& n, int a[]) {

	cout << "Nhap vao so luong: ";
	cin >> n;
	cout << "Nhap vao mang: ";
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

void progress(int n, int a[],int b[]) {

	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			if (a[j] == a[i]) b[i]++;
		}
	}
}

void output(int n, int a[], int b[]) {

	int max = 1;
	for (int i = 0; i < n; i++) {
		if (b[i] > max)
			max = b[i];
	}
	
	for (int i = 0; i < n; i++) {
		if (b[i] == max)
			cout << "Phan tu " << a[i] << " xuat hien " << b[i] << " lan \n";
	}

}

int main() {

	int n, a[SIZE], b[SIZE] = {0};
	input(n, a);
	progress(n, a, b);
	output(n, a, b);

}