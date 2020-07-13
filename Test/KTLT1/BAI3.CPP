//C++ Lib
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
//C Lib
#include <cmath>
#include <climits>

//namespace
using namespace std;

string s;

void solve();

int main() {

    getline(cin,s);

    solve();

    return 0;
}

void solve(){

    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;

    for(int i=0; i < s.length();i++){

        if(s[i] >= 'a' && s[i] <= 'z')
            a += 1;
        else if(s[i] >= 'A' && s[i] <= 'Z'){
            b += 1;
        }
        else if(s[i] >= '0' && s[i] <= '9'){
            c += 1;
        }
        else{
            d += 1;
        } 
    }

    cout << a << " " << b << " " << c << " " << d;
}