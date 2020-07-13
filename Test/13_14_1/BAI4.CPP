#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long
#define i2Vt vector<vector<int>>

using namespace std;


struct coor
{
	int x;
	int y;
	int value = 0;
	coor(int i, int j, int Value) {
		x = i;
		y = j;
		value = Value;
	}

	coor(int i, int j) {
		x = i;
		y = j;
	}
};

bool laDiemLoi(i2Vt arr, int i, int j, int m, int n);
void diemLoi(i2Vt arr, int m, int n);

int main() {
	i2Vt arr;
	int m, n;
	cin >> m >> n;
	arr.resize(m);
	for (int i = 0; i < m; i++) {
		arr[i].resize(n);
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	cout << endl;
	diemLoi(arr, m, n);
}

void diemLoi(i2Vt arr, int m, int n) {
	vector<coor> diemLoi;
	for (int i = 0; i < arr.size(); i++) {
		for (int j = 0; j < arr[i].size(); j++) {
			if (laDiemLoi(arr, i, j, m, n)) {
				coor temp(i, j, arr[i][j]);
				diemLoi.push_back(temp);
			}
		}
	}

	coor coorMin = { -1,-1 ,INT_MAX };

	for (int i = 0; i < diemLoi.size(); i++) {
		if (diemLoi[i].value < coorMin.value) {
			coorMin = diemLoi[i];
		}
	}
	if (coorMin.x == -1) cout << "Khong co diem loi nao";
	else cout << coorMin.x << " " << coorMin.y;
	for (int i = 0; i < arr.size(); i++) {
		for (int j = 0; j < arr[i].size(); j++) {
			if (i == coorMin.x && j == coorMin.y) {
				cout << arr[i][j] << " ";
			}
			else {
				cout << arr[i][j] << " ";
			}
		}
		cout << endl;
	}

}

bool laDiemLoi(i2Vt arr, int i, int j, int m, int n) {

	vector<coor> neighborCoor = { {1,0}, {0,1}, {-1, 0}, {0,-1} };

	for (int k = 0; k < 4; k++) {
	
		coor neighbor(i + neighborCoor[k].x, j + neighborCoor[k].y);
		if (neighbor.x >= m || neighbor.x < 0 || neighbor.y >= n || neighbor.y < 0) continue;
	
		else {
			
			neighbor.value = arr[neighbor.x][neighbor.y];
		
			if (arr[i][j] <= neighbor.value) return false;

		}
	}
	return true;
}