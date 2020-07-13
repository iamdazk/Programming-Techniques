
#include <iostream>
#include <algorithm>
#include <cmath>
#include <climits>

#define cap 100
//namespace
using namespace std;

int m,n;
int arr[cap][cap];

void init();
void solve();

int main() {

    init();

    solve();

    return 0;
}

void init(){

    cin >> m >> n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }
}

void solve(){

    int _max = INT_MIN;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            _max = max(_max,arr[i][j]);
        }
    }

    cout << _max;
}