#include<iostream>

#define cap 100
using namespace std;

typedef struct PS{
    int ts;
    int ms;
};

void inputPS(PS& a);
void inputArr(int &n,PS arr[]);
double realValue(PS a);
void maxPS(int n,PS arr[]);

int main(){

    int n;
    PS arr[cap];

    inputArr(n,arr);
    maxPS(n,arr);
    
    return 0;
}

void inputPS(PS& a)
{
	cin >> a.ts;
	do {
		cin >> a.ms;
	} while (a.ms == 0);
}

void inputArr(int &n,PS arr[])
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		inputPS(arr[i]);
	}
}

double realValue(PS a){

    return double(a.ts)/(a.ms);
}

void maxPS(int n,PS arr[]){

    PS max = arr[0];
    for(int i=0;i<n;i++){
        if(realValue(arr[i]) >= realValue(max)) {
        max = arr[i];
        break;
        }
    }
    cout << max.ts << " " << max.ms;
}