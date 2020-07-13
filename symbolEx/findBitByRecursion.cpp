#include <iostream>
#define cap 1000

using namespace std;

int arr[cap],n,x;

void init();
int findX(int A[],int n,int x,int trai,int phai);

int main(){
	
	int left = 0;
	init();
	int right = n-1;
	int rs = findX(arr,n,x,left,right);
	cout << rs;

    return 0;
}

void init(){

    cin >> x >> n;
	for(int i=0;i<n;i++){
        cin >> arr[i]; 
    }
}

int findX(int arr[],int n,int x,int left,int right){

	int mid = (left+right)/2;
	if(left > right)
		return 0;
	if(arr[mid]==x)
		return mid;
	else
	{
		if(arr[mid]>x)
			return findX(arr,n,x,left,mid-1);
		else
			return findX(arr,n,x,mid+1,right);
	}
}