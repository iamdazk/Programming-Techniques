//C++ Lib
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
//C Lib
#include <cmath>
#include <climits>

using namespace std;

string s;

void solve();

int main() {

    getline(cin,s);

    solve();

    return 0;
}

void solve(){

    int m = 0; 
    int n = 0;
    int l = 0;
    int k = 0;
    for(int i = 0;i < s.length();i++){
        if(s[i] >= 'A' && s[i] <= 'Z')
            m++;
        else if(s[i] >= 'a' && s[i] <= 'z')
            n++;
        else if(s[i] >= '0' && s[i] <= '9')
            l++;
        else
            k++;
    }

    cout << n << " " << m << " " << l << " " << k;
}