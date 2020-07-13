#include<iostream>

#define cap 1000

int n;
int arr[cap];

using namespace std;

void input(int &n,int temp[]);
void swap(int &a,int &b);
void permute(int n);
void firstConfi(int temp[]);
void showValue(int temp[]);

int main(){

    input(n,arr);
    
    permute(n);

    return 0;
}

void input(int &n,int arr[]){

    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
}

void permute(int n){

    int temp[cap];
    firstConfi(temp);

    while(true){
        showValue(temp); 

        int i = n - 2;
        while(i >= 0 && temp[i] > temp[i+1]) i--;

        if(i > - 1){
            int j = n - 1;
            while(temp[j] < temp[i]) j--;
            swap(temp[j],temp[i]);

            int k = i + 1;
            int l = n - 1;
            if(l > k){
                swap(temp[k],temp[l]);
                k++;
                l--;
            }
        }
        if(i == -1) break;
    }

}

void swap(int &a,int &b){

    int temp = a;
    a = b;
    b = temp;
}

void firstConfi(int temp[]){

    temp[0]=0;
    for(int i=1 ;i<n;i++){
        temp[i] = temp[i-1] + 1;
    }
}

void showValue(int temp[]){

    cout << "\n";
    for(int i=0;i<n;i++){
        cout << arr[temp[i]] << " ";
    }
    cout << "\n";
}


