#include<iostream>

using namespace std;

int result(float A);

int main(){

    float A;
    cin >> A;
    
    cout << result(A);

    return 0;
}

int result(float A){

    float sum = 0;
    int temp = 0;
    int i = 1;
    while(sum <= A){

        sum += float(1)/i;
        i++;
    }
    return i - 1;
}

