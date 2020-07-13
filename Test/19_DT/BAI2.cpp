#include <iostream>
#include <algorithm>
#include <climits>
#define cap 1000

using namespace std;

void input();
int solve();

int n,k;
int arr[cap];

int main() {

    input();
    
    cout << solve();

    return 0;
}

void input(){

    cin >> n >> k;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
}

int solve(){

    int sum = 0;
    int _min = INT_MAX;
    for(int i=0;i<n;i++){
        sum += arr[i];
        _min = min(_min, arr[i]);
    }

    int L[cap] = {0};
    L[_min] = 1;

    int s = sum / k * k;

    for (int i = 0 ; i < n ; i++) {
        for (int t = s; t >= _min; t--) {
            if (L[t] == 0 && L[t - arr[i]] == 1) L[t] = 1;
        }
    } 

    while(s >= _min) {
        if (L[s] == 1 && s % k == 0) return s; 
        s--;
    }
}
