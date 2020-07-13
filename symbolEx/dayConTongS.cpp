#include<iostream>

#define cap 1000

using namespace std;

int n,l[cap],arr[cap],sum;

void input();
int solve();

int main(){

    input();

    cout << solve();

    return 0;
}

void input(){

    cin >> n >> sum;

    l[0] = 1;
    l[n] = 0;

    for(int i=0;i<n;i++){
        cin >> arr[i];    
    }
}

int solve(){

    for(int i=0;i<n;i++){
        for(int j=sum;j>=0;j--){
             if ((l[j] == 0) && (l[j-arr[i]] == 1)) {
                 l[j]=1;
             }   
        }
    }

    if(l[n] == 1)
        return 1;
    else 
        return 0;
}
