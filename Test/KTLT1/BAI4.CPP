#include <iostream>

#define cap 100

using namespace std;

int m,n,k;
int mark[cap][cap]{0};

void init();
int solve();
bool isCamera(int i,int j);

int main() {

    init();

    cout << solve();

    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         cout << mark[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}

void init(){

    cin >> m >> n >> k;
    for(int i = 0;i < k;i++){
        int _i,_j;
        cin >> _i >> _j;
        mark[_i][_j] = -1;
    }
}

int solve(){

    int _x[cap]={-2,-1,-1,-1,0,0,0,0,0,1,1,1,2};
    int _y[cap]={0,-1,0,1,-2,-1,0,1,2,-1,0,1,0};

    int count = 0;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(mark[i][j] == -1){
                for(int k=0;k<13;k++){
                    if(isCamera(i+_x[k],j+_y[k])){
                        mark[i+_x[k]][j+_y[k]] ++;
                    }
                }
            }
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(mark[i][j] != 0){
                count++;
            }
        }
    }

    return count;
}

bool isCamera(int i,int j){

    return (i >= 0 && j >=0 && i <= m && j <=n && mark[i][j] == 0);
}