#include<iostream>
using namespace std;

int getbit(int n,int i);
void bitdisplay(int n);
void bitcount(int n);

int main(){

    int n;
    cin >> n;
    bitdisplay(n);
    bitcount(n);
    return 0;
}

int getbit(int n,int i){

    return (n >> i) & 1;
}

void bitcount(int n){

    int count=0;
    for(int i=0;i<32;i++){
        if(getbit(n,i) == 1) count ++;
    }
    cout << count;
}

void bitdisplay(int n){

    for(int i=0;i < 32;i++){
        cout << getbit(n,i);
    }
    cout << "\n";
}