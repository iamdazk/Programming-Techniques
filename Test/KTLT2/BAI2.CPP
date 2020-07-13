#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string s;

void solve();

int main() {

    getline(cin,s);

    solve();

    return 0;
}

void solve(){

    string temp = "";
    string rs = "";
    s.push_back(' ');

    for(int i=0;i<s.length();i++){
        if(s[i] == ' '){
            reverse(temp.begin(),temp.end());
            rs += temp;
            rs += ' ';
            temp = "";
        }
        else{
            temp.push_back(s[i]);
        }
    }

    cout << rs;
}