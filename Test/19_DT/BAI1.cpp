#include <iostream>

#define cap 1000

using namespace std;

int m,F[cap];

int solve();

int main() {

    cin >> m;

    cout << solve();

    return 0;
}

int solve(){

    if(m < 4)
        return 0;

    F[0] = 2;
    F[1] = 4;
    F[2] = 6;

    // m = 5 ?
    if(m >= 4 && m < 6){
        
        return 1;
    }else{

        int n = 2;
    while(F[n] <= m){
        n++;
        F[n] = 2*F[n-3] + 4*F[n-2] + 6*F[n-1];
    }
    return n-1;
    }
    
}