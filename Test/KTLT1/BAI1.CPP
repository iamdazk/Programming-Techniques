#include <iostream>
#include <string>

using namespace std;

string s;

int solve();

int main() {

    cin >> s;

    cout << solve();

    return 0;
}

int solve(){

    int score = 0;
    int k = 0;
    int l = s.length();
    for(int i=0; i<l; i++){
        if(s[i] == 'V'){
            k += 1;
            score += k;
        }
        else
            k = 0;
    }

    return score;
}