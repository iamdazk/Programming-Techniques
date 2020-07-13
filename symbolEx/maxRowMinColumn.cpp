#include<iostream>
#include<climits>

#define cap 100

using namespace std;

int m,n;
int arr[cap][cap];

void init();
void solve();
bool rMax(int x, int r);
bool cMin(int x, int c);

int main(){

    init();

    solve();

    return 0;
}

void init(){

    cin >> m >> n;
    for(int i=0;i < m;i++){
        for(int j=0;j < n;j++){
            cin >> arr[i][j];
        }
    }
}

void solve(){

    for(int i=0;i < m;i++){
        for(int j=0;j < n;j++){
            if (rMax(arr[i][j], i) && (cMin(arr[i][j],j)))  {
                cout << arr[i][j];
            }    
        }
    }
}

bool rMax(int x, int r) {
    for (int i = 0; i < n ; i++) {
        if (arr[r][i] > x) return false;
    }
    return true;
}

bool cMin(int x, int c) {
    for (int j = 0; j < m ; j++) {
        if (arr[j][c] < x) return false;
    }
    return true;
}

/*
1 2 3 4
5 6 7 8
9 10 11 12
*/


