#include<iostream>
#include<string>
#include<algorithm>

#define cap 1000

using namespace std;

string s;

void solve();

int main(){

    getline(cin,s);

    solve();

    return 0;
}

void solve(){

    int l = s.length();

    string rs="";
    s.push_back(' ');
    string temp = "";

    for(int i=0; i <= l;i++){
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