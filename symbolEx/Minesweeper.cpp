#include<iostream>

#define cap 100

using namespace std;

int m,n;
int arr[cap][cap];

void input();
void solve();
void show();
bool notMine(int i, int j);

int main(){

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
                arr[i][j] *= -1;
        }
    }
}

void solve(){

    int _i[9] = {-1,-1,-1,0,0,1,1,1};
    int _j[9] = {-1,0,1,-1,1,-1,0,1};

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j] == -1){
                for (int k = 0 ; k < 8 ; k++) {
                    int x,y;
                    x = i+_i[k];
                    y = j+_j[k];
                    if (notMine(x,y)) {
                        arr[x][y]++;
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


bool notMine(int i, int j) {
    return (i >= 0 && i < m && j >= 0 && j < n && arr[i][j] != -1);
}

// 4 5
// 0 0 1 0 1
// 0 1 0 1 1
// 1 0 0 1 0
// 0 1 1 1 0