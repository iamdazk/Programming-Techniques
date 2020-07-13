#include<iostream>
#include<vector>
using namespace std;

#define cap 1000

int n;
vector<int> arr;
vector<int> bit{0};

void input();
void onbit(int &n,int i);
void offbit(int &n,int i);
int getbit(int &n,int i);
void bitsubset();
void show();

int main(){
    
    input();
    
    bitsubset();
    
    return 0;
}

void input(){
    
    cin >> n;
    arr.resize(n);
    bit.resize(n/32+1);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
}

void onbit(int &n,int i){

    n |= 1 << i;
}

void offbit(int &n,int i){

    n &= ~(1 << i);
}

int getbit(int &n,int i){

    return (n>>i) & 1;
}

void bitsubset(){
    
    while(true){
        show();
        int i = n - 1;
        while( i >= 0 && getbit(bit[i/32],i%32)) i--;
        if(i >= 0){
            onbit(bit[i/32],i%32);
            i++;
            while(i <= n-1){
                offbit(bit[i/32],i%32);
                i++;
            }
        }
        if(i== -1) break;
    }
}

void show(){

    for(int i=0;i < n;i++){
        if(getbit(bit[i/32],i%32))
        cout << arr[i] << " ";
    }
    cout << '\n';
}
