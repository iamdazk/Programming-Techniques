#include <iostream>
#include <iomanip>
#define cap 100

using namespace std;

int n,a,b;
int mark[cap][cap]{0};
int x[8] = { -2,-2,-1,-1, 1, 1, 2, 2};
int y[8] = { -1, 1,-2, 2,-2, 2,-1, 1};
int cnt = 0;


void solve(int i,int j);
void show();

int main() {

    cin >> n >> a >> b;

    solve(a,b);

    return 0;
}

void solve(int a,int b){

    cnt++;
    mark[a][b] = cnt;

    for(int l = 0 ; l < 8;l++){
        if(cnt == n*n){
            show();
            exit(0); // thoat chuong trinh
        }

        int m = a + x[l];
        int k = b + y[l];
        if (m >= 0 && m < n && k >= 0 && k < n && mark[m][k] == 0)
            solve(m, k);
    }
  
    cnt--;
    mark[a][b] = 0;

}

void show(){

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            //cout << setw(3) <<  mark[i][j];
            cout << mark[i][j] << " ";
        }
        cout << endl;
    }
}