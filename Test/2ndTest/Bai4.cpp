#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <cmath>
#include <climits>

#define cap 1000

using namespace std;

void input();
void matrixRotation();

int m,n,arr[cap][cap];
int arr1[cap][cap];
string S;

int main() {

    input();

    matrixRotation();

    return 0;

}

void input(){

    cin >> m >> n;

    for(int i = 0;i < m ; i++){
        for(int j = 0;j < n; j++){
            cin >> arr[i][j];
        }
    }
    cin >> S;
}

void matrixRotation(){

    int R = 0;
    int D = 0;
    for(int i = 0 ;i < S.length();i++){
        if(S[i] == 'R') R+= 1;
        else if(S[i] == 'D') D+= 1;
    }

    for(int i = 0;i < m ; i++){
        for(int j = 0;j < n; j++){
            arr1[(i+D)%m][(j+R)%n] = arr[i][j];
        }
    }

    for(int i = 0;i < m ; i++){
        for(int j = 0;j < n; j++){
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
}
