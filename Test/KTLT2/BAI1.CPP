#include<iostream>
#include<climits>
#include<algorithm>

#define cap 1000

using namespace std;

int n;
float arr[cap];

int main(){

    return 0;
}

void init(){

    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
}

float solve(){

    float temp = 0;
    float _max = INT_MIN;
    for(int i=0;i<0;i++){
        temp += arr[i];
        _max = max(temp,_max);
    }

    return _max;
}