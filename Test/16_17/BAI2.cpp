#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

string n;

int solve();

int main(){

    cin >> n;

    cout << solve();

    return 0;
}

int solve(){

    int m = 0;
    int temp = 0;

    for(int i=0;i < n.length();i++){

        (n[i] == '(') ? temp += 1 : temp -= 1;
        if(temp < 0) break;
        m = max(m,temp);
    }

    if(temp == 0)
        return m;
    else 
        return -1;

}