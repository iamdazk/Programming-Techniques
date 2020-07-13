#include <iostream>

using namespace std;

int n;

int solve();

int main() {

    cin >> n;

    cout << solve();

    return 0;
}

int solve(){

    int rs = 0;

    while(n > 0){
        if(n % 2 == 1)
            rs += 1;
        n/= 2;
    }

    return rs;
}