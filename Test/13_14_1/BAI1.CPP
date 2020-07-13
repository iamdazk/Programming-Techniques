#include <iostream>
#include <algorithm>
#include <climits>

#define cap 1000

using namespace std;

void input();
float solve();

int n;
float arr[cap];

int main() {

    input();
    
    cout << solve();

    return 0;
}

void input(){

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
}

float solve(){

    float temp = 0;
    float _max = INT_MIN;
    
    for(int i=0;i<n;i++){
        temp += arr[i];
        if(temp < 0) temp = 0;
        _max = max(_max,temp);
        // cout << temp << " " << _min << endl;
    }

    return _max;
}

