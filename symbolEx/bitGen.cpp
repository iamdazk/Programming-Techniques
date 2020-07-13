//C++ Lib
#include <iostream>

#define cap 1000

using namespace std;

int n,arr[cap];

void show(int arr[],int k);
void solve();
int main() {
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    solve();

    return 0;
}

void show(int arr[],int k){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void solve(){
    int arr[cap]{0};
    int k = 1;
    while(true){
        show(arr,k);
        if(arr[k-1]+1<n){
            arr[k]= arr[k-1]+1;
            k++;
        }
        else{
            k--;
            if(k==0)
                return;
            arr[k-1] = arr[k-1] + 1;
        }
    }
}