#include<iostream>

using namespace std;

int countBit();

int n;

int main(){

    cin >> n;

    cout << countBit();

    return 0;
}

int countBit(){

    int temp = 0;

    while(n > 0){    
        (n % 2 == 1) ? temp += 1 : temp += 0;
        n /= 2;
    }

    return temp;
}
