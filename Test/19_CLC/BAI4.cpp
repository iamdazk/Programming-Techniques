#include<iostream>

#define capacity 100

using namespace std;

void input(int& m, int& n, int arr[][capacity]);
bool laDiemLoi(int arr[][capacity], int i, int j);
void diemLoiNhoNhat(int m, int n, int arr[][capacity]);

int main() {

	int m, n, arr[capacity][capacity];
	input(m, n, arr);
	diemLoiNhoNhat(m, n, arr);

	return 0;
}

void input(int& m, int& n, int arr[][capacity]) {

	cin >> m >> n;
	for (int i = 0; i <= m+1; i++) {
		for (int j = 0; j < n+1; j++) {
			arr[i][j] = -999999999;
		}
	}
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> arr[i][j];
		}
	}
}

bool laDiemLoi(int arr[][capacity],int i,int j){
	if ((arr[i][j] > arr[i][j + 1]) && (arr[i][j] > arr[i][j - 1]) && (arr[i][j] > arr[i + 1][j]) && (arr[i][j] > arr[i - 1][j]))
		return true;
	else
		return false;
}

void diemLoiNhoNhat(int m, int n, int arr[][capacity]) {

	int min = 999999999;
	int x, y;
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			{
				if ( laDiemLoi(arr,i,j) && (arr[i][j] < min)) {
					min = arr[i][j];
					x = i;
					y = j;
				}
			}
		}
	}
	if (min == 999999999)
		cout << "Khong co diem loi";
	else
		cout << x - 1 << " " << y - 1;
}
