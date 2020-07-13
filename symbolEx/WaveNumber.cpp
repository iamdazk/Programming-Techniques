#include<iostream>
#include<cstring>

#define cap 100
using namespace std;

bool isWaveNumber(int n);
int countWaveNumber(int a,int b);

int main(){

    int a,b;
    cin >> a >> b;
    
    cout << countWaveNumber(a,b);

    return 0;
}

bool isWaveNumber(int n){

    int A[cap];
    int na = 0;
    while(n > 0){
        A[na++] = n % 10;
        n/=10;
    }
    for(int i=1; i< na-1; i++){
        if(i >= i + 1 && i <= i + 1 )
        return false;
        if(i <= i - 1 && i >= i + 1)
        return false;
    }
    return true;
}

int countWaveNumber(int a,int b){

    int count = 0;
    for(int i=a;i<=b;i++){
        if(isWaveNumber(i))
        count ++;
    }
    return count;
}