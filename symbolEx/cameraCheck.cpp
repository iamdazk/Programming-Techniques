#include<iostream>

#define cap 1000

using namespace std;

int m,n,x;
int mark[cap][cap]{0};

void input();
int solve();
bool safe(int i,int j);

int main(){

    input();
    
    // for(int i = 0;i < m;i++){
    //     for(int j = 0;j < n;j++){
    //        cout << mark[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    cout << solve();

    return 0;
}

void input(){

    cin >> m >> n >> x;
    for(int i = 0;i < x;i++){
            int _i,_j;
            cin >> _i >> _j;
            mark[_i][_j] = -1;
    }
}

int solve(){

    int _i[cap] = {-2,-1,-1,-1,0,0,0,0,0,1,1,1,2};
    int _j[cap] = {0,-1,0,1,-2,-1,0,1,2,-1,0,1,0};

    int count = 0;

    for(int i = 0;i < m;i++){
        for(int j = 0;j < n;j++){
            if(mark[i][j] == -1){
                for(int k = 0;k < 13;k++){
                    if(safe(i+_i[k],j+_j[k])){
                        // tai vt loang +1
                        mark[i+_i[k]][j+_j[k]]++;
                    }
                }
            }
        }
    }

    for(int i = 0;i < m;i++){
        for(int j = 0;j < n;j++){
            if(mark[i][j] != 0){
                count++;
            }
        }
    }

    return count;

}

bool safe(int i,int j){

    // mark[i][j] == 0 de duyet phan tu khong bi cong trung
    return(i >= 0 && j >= 0 && i <= m && j <= n && mark[i][j] == 0);
}

