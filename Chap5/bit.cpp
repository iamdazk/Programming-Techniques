#include<iostream>
#include <climits>
using namespace std;

void input(int &n,int &i);
void onbit(int &n,int i);
void offbit(int &n,int i);
int getbit(int &n,int i);
void bitdisplay(int n);

int main(){

    // int n,i;
    // input(n,i);
    // onbit(n,i);
    // offbit(n,i);
    // getbit(n,i);
    // bitdisplay(n);


    return 0;
}

void input(int &n,int &i){

    cin >> n >> i;
}

void onbit(int &n,int i){

    n |= 1 << i;
    cout << n << '\n';
}

void offbit(int &n,int i){

    n &= ~(1 << i);
    cout << n << '\n';
}

int getbit(int &n,int i){

    return (n>>i) & 1;
}

void bitdisplay(int n){

    for(int i=0;i < 32;i++){
        cout << getbit(n,i);
    }
}