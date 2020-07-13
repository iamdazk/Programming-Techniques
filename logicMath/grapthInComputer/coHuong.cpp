//C++ Lib
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
//C Lib
#include <cmath>
#include <climits>

#define cap 100
//namespace
using namespace std;

int nearMatrix[cap][cap];

int main() {

    solve();

    return 0;
}

void solve(){

    int d;
    char w;
    cin >> d >> w;
    
    for(int i= 0; i < d; i++){

        int _i,_j,_k;
        cin >> _i >> _j >> _k;
        nearMatrix[_i][_j] += _k;
        if(_i != _j) 
            nearMatrix[_i][_j] += _k;
    }
    





}