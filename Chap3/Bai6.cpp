#include<iostream>
#include<cmath>

using namespace std;

long double result();

int x,n;

int main(){

    cin >> x >> n;
    cout << result();
}

long double result(){

    int giaiThua = 1;
    int soMu = 1;
    double result = 1;
    for(int i = 1; i <= n ;i++){
        giaiThua *= i;
        soMu = pow(x,i);
        result += double(soMu)/giaiThua;
    }
    return result;
}