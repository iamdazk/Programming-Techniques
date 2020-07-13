#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int solve();

string n;

int main(){

    cin >> n;

    cout << solve();
    
    return 0;
}

int solve(){

    int temp = 0;
    int m = 0;
    for(int i = 0; i < n.size(); i++){
        (n[i] == '(')? temp += 1 : temp -= 1;
        if(temp < 0) break;
        m = max(temp,m);
    }

    if(temp == 0)
        return m;
    else 
        return -1;
}