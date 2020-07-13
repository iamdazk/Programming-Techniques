#include <iostream>
#include <algorithm>
#include <climits>

#define cap 100

using namespace std;

int v,e;
int arr[cap][cap];

int main(){


    return 0;
}

void init(){

    cin >> v >> e;
    for(int i=0 ; i < v ; i++){
        int x,y,w;
        cin >> x >> y >> w;
        arr[x][y] = arr[y][x] = w;
    }
}

void solve(){

    int min = INT_MIN;
    int count = 0;

    for(int i = 0; i < e; i++){
        
    }

}

