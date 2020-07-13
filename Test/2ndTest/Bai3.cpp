
#include <iostream>
#include <iomanip>
#include<algorithm>
#include <cmath>

#define cap 100
using namespace std;

void input();
long int maxSum();

long int k;
int n,arr[cap],F[cap][cap];

int main() {

    input();

    cout << maxSum();

    return 0;
}

void input(){

    cin >> n >> k;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
}

long int maxSum(){

    for(int i = 0;i < n;i++){
        for(int j = 0; j < n ; j++){

            if(i == 0){
                if (j != 0) {
                    F[0][j] = arr[0] + arr[j];
                } else {
                    F[0][j] = arr[i];
                }
            } else {
            if(i != j){
                if (arr[i] + arr[j] <= k && arr[i] + F[i-1][j] <= k) {
                     F[i][j] = max(arr[i]+arr[j],arr[i]+F[i-1][j]);
                } else if (arr[i] + arr[j] <= k){
                    F[i][j] = arr[i] + arr[j];
                } else if (arr[i] + F[i-1][j] <= k) {
                    F[i][j] = arr[i] + F[i-1][j];
                } else {
                    F[i][j] = F[i][j-1];
                }
            }          
            if(i == j){
                F[i][j] = F[i][j-1];
                }     
            }
        }
    }

    int maxValue = F[0][0];
    for(int j = 0 ; j < n - 1;j++){
        
        if(F[j][n-1] > maxValue){
            maxValue = F[j][n-1];
        }
    }

    return maxValue;
}