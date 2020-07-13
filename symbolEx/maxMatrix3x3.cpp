#include <iostream>
#include <iomanip>
#define cap 100

using namespace std;

int m,n;
int arr[cap][cap];
int temp[cap];

void input();
float solve();

int main() {

    input();

    cout << fixed << setprecision(2) << solve();

    return 0;
}

void input(){

    cin >> m >> n;
    for(int i = 0;i < m;i++){
        for(int j = 0;j < n;j++){
            cin >> arr[i][j];
        }
    }
}

float solve(){

    int t = -9999999;

    for(int i = 0;i <= m - 3;i++){
        for(int j = 0;j <= n - 3;j++){
            float sum = 0;
            for(int k = 0; k < 3;k++){
                for(int l = 0 ; l < 3;l++){
                    sum += arr[k+i][j+l];
                    // cout << "i: " << i << " j: " << j << " k: " << k << " l: " << l << endl;
                    // cout << "sum: " << sum << " t : " << t << endl;
                    }    
                }
                if(sum > t) t = sum;
            }
    }
    return t;
}

// 4 5
// 1 3 5 7 9 
// 36 39 42 45 12
// 33 54 51 48 15
// 30 27 24 21 18