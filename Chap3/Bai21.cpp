#include<iostream>

using namespace std;

int n;

void result();

int main(){

    cin >> n;

    result();
    return 0;
}

void result(){

    double sum = 1;
    for(int i = 1; i<=n ;i++){

        sum *= (1+float(1)/(i*i));
    }
    cout << sum;
}