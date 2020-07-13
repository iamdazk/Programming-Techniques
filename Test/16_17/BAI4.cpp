#include <iostream>

#define cap 100

using namespace std;

void input();
void solve();
void show();
bool notMine(int i, int j);

int m,n,arr[cap][cap];

int main() {

    input();

    solve();

    show();
    
    return 0;
}

void input(){

    cin >> m >> n;
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
            if (arr[i][j] == 1) 
                arr[i][j] = 9;
        }
    }

}

void solve(){

    int x[9] = {-1,-1,-1,0,0,1,1,1};
    int y[9] = {-1,0,1,-1,1,-1,0,1};

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j] == 9){
                for(int k = 0;k < 8;k++){
                    int _x,_y;
                    _x = i + x[k];
                    _y = j + y[k];
                    if(notMine(_x,_y)){
                        arr[_x][_y]++;
                    }
                }
            }
        }
    }
    
}

void show(){

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

bool notMine(int i, int j){

    return(i >= 0 && j >= 0 && i < m && j < n && arr[i][j] != 9);
}


/*

4	5			
0	0	1	0	1
0	1	0	1	1
1	0	0	1	0
0	1	1	1	0

*/

