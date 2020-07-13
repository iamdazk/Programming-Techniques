#include <iostream>

using namespace std;

int n;

unsigned long int solve();

int main() {

    cin >> n;

    cout << solve();

    return 0;
}
unsigned long int solve(){

    unsigned long int next = 0;
    unsigned long int rs = 0;

    for(int i=1;i<=n;i++){
        next += i;
        rs += next;
    }

    return rs;
}