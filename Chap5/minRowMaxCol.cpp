#include<iostream>
#include<climits>

#define cap 100

using namespace std;


void input(int& m, int& n, int arr[][cap]);
int maxRow(int m, int n, int arr[][cap], int i);
int minCol(int m, int n, int arr[][cap], int j);
void validValue(int m, int n, int arr[][cap]);

int main() {

	int m, n, arr[cap][cap];
	input(m, n, arr);
	validValue(m, n, arr);

	return 0;
}


void input(int& m, int& n, int arr[][cap]) {

	cin >> m >> n;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
}

int maxRow(int m, int n, int arr[][cap] , int i) {

	int temp = INT_MIN;
    for (int j = 0 ; j < n ; j++) {
        if (arr[i][j] > temp) temp = arr[i][j];
    }
	return temp;
}

int minCol(int m, int n, int arr[][cap] , int j) {
    
	int temp = INT_MAX;
    for (int i = 0 ; i < m ; i++) {
        if (arr[i][j] < temp) temp = arr[i][j];
    }
	return temp;
}

void validValue(int m, int n, int arr[][cap]) {

	int b[cap];
	int nb = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
            int r = maxRow(m,n,arr,i);
            int c = minCol(m,n,arr,j);
			if (arr[i][j] == r && arr[i][j] == c)
				b[nb++] = arr[i][j];
        }

	}


	for (int k = 0; k < nb; k++) {
		cout << b[k] << " ";
	}

}
