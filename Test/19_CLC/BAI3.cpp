#include<iostream>
#define cap 1000

using namespace std;

void result(float x,int n);

int main(){

    float x;
    int n;
    cin >> x >> n;

    result(x,n);

    return 0;
}

void result(float x,int n){

    float sum = 1;
    float temp = 1;
    for(int i=1;i<=n;i++){
        int l;
        if (i % 2 != 0) {
            l = -1;
        } else l = 1;

        temp *= (float)x/i;
        sum += l*temp;

    }
    cout << sum << endl;
}