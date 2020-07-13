#include<iostream>
#include<algorithm>

#define cap 1000

using namespace std;

void input();
int findMinValue(int i);

int n,arr[cap];

int main(){

    input();

    cout << findMinValue(0);

    return 0;
}

void input(){

    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
}

int findMinValue(int i){

    if(i == n - 1) 
        return arr[i];
    else
        return min(arr[i],findMinValue(i+1));
}