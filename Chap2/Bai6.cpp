#include<iostream>
#define capacity 200

using namespace std;

void input(int& m, int& n, int a[], int b[]) {

	cout << "Nhap vao so luong mang A: ";
	cin >> m;
	cout << "Nhap vao mang A: ";
	for (int i = 0; i < m; i++) {
		cin >> a[i];
	}
	cout << "Nhap vao so luong mang B: ";
	cin >> n;
	cout << "Nhap vao mang B: ";
	for (int j = 0; j < n; j++) {
		cin >> b[j];
	}
} 

void ghepMang(int m, int n, int a[], int b[]) {

	int c[capacity];
	int i = 0;
	int j = 0;
	int nc = 0;

	bool thuaA = false;
	bool thuaB = false;

	while (nc < m + n) {
		if (nc % 2 == 0) {
			if (i < m) {
				c[nc] = a[i];
				i++;
			}
			else {
				thuaB = true;
				break;
			}
		}
		else {
			if (j < n) {
				c[nc] = b[j];
				j++;
			} 
			else {
				thuaA = true;
				break;
			}
		}
		nc++;
	}

	if (thuaA) {
		for (nc; nc < m+n; nc++) {
			c[nc] = a[i];
			i++;
		}
	}
	if (thuaB) {
		for (nc; nc < m+n; nc++) {
			c[nc] = b[j];
			j++;
		}
	}

	cout << "Mang sau khi da ghep: ";
	for (int k = 0; k < nc; k++) {
		cout << c[k] << " ";
	}

}

int main() {
	
	int m, n, a[100], b[100];
	input(m, n, a, b);
	ghepMang(m, n, a, b);
}
