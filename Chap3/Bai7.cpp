#include<iostream>

using namespace std;

int fib(int n);

int main(){

    int n;
    cin >> n;
    if(n <= 0)
        cout << "Khong co gia tri";
    else 
        cout << fib(n);

    return 0;
}

int fib(int n){

    if(n == 1 || n == 2)
        return 1;
    return fib(n-1) + fib(n-2);

}