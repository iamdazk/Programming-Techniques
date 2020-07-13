#include<iostream>
#include<algorithm>
#include<climits>

#define cap 1000

using namespace std;

void input();
void solve();
int findMin(int x,int f[]);


int n,arr[cap],f[cap];

int main(){

    input();

    solve();


    return 0;
}

void input(){

    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
}

void solve(){

    f[0] = arr[0];

    for(int i=1;i < n;i++){
        f[i] =  INT_MAX;
    }

    int result = -1;

    for(int i=1;i < n;i++){

        int index= findMin(arr[i],f);
        f[index] = arr[i];
        if(index > result) 
            result = index;
    }

    cout << result + 1;
}



int findMin(int x,int f[]){

    int i = 0;

    while(f[i] < x) i++;

    return i;
}