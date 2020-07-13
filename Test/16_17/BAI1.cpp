#include<iostream>

#define cap 1000

using namespace std;

int result();

int n,arr[cap];

int main(){

    cin >> n;

    cout << result();

    return 0;
}

int result(){

    if(n<4)
        return n-1;

    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    int m = 2;
    while(arr[m] <=n){
        m++;
        arr[m] = arr[m-3] + 2*arr[m-2] + 3*arr[m-1]; 
    }
    return m-1;
}