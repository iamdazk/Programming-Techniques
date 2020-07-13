#include <iostream>

using namespace std;

void input();
int solve();

int x[8] = {-2,-2,-1,1,2,2,1,-1};
int y[8] = {1,-1,-2,-2,-1,1,2,2};

int x1,y1,x2,y2;

int main() {

    input();

    cout << solve();

    return 0;
}

void input(){

    cin >> x1 >> y1 >> x2 >> y2;
}

int solve(){


    int i = 7;
    
    while(((x[i] != x2-x1) || ( y[i] != y2-y1))  && i >= 0) i--;
        cout << i << endl;
    
    return i + 1;
}