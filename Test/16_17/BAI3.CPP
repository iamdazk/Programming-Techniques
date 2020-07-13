#include<iostream>  
#include<algorithm>
#include<climits>

#define cap 1000

using namespace std; 
    
int n, arr[cap];

void init();
int _lis();

int main()  
{  
 
    init();

    cout << _lis();
  
    return 0;  
}

void init(){

    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
}

int _lis()  {  

    int lis[cap];

    lis[0] = 1;    

    int t1 = INT_MIN;
  
    for (int i = 1; i < n; i++ )  
    { 
        lis[i] = 1; 
        for (int j = 0; j < i; j++ ) {
            if ( arr[i] >= arr[j] && lis[i] < lis[j] + 1)  
                lis[i] = lis[j] + 1;
        }     
        t1 = max(t1,lis[i]);   
    } 

    int temp[cap];
    int ntemp = 0;
    for(int i=n; i>0; i--){
        temp[ntemp++] = arr[i]; 
    }

    int t2 = INT_MIN;

    for (int i = 1; i < n; i++ )  
    { 
        lis[i] = 1; 
        for (int j = 0; j < i; j++ ) {
            if ( temp[i] >= temp[j] && lis[i] < lis[j] + 1)  
                lis[i] = lis[j] + 1;
        }     
        t2 = max(t2,lis[i]);   
    }
  
    return max(t1,t2);
}  
    

