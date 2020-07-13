#include<iostream>

#define cap 1000

using namespace std;

int n,arr[cap];

int main(){

    input();
    return 0;
}

void input(){

    cin >> n;
    for(int i=0;i<n;i++){

        cin >> arr[i];
    }
}

void arrangeArray(){

    int max = arr[0];
    for(int i=1;i<n;i++){

        if(arr[i] > arr[i+1])
        arr[i+1] = arr[i];
    }
}