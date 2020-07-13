#include<iostream>
#include<string>

using namespace std;

string s1,s2;

void solve();
int same(string s1,string s2,int k);

int main(){

    getline(cin,s1);
    getline(cin,s2);

    solve();

    return 0;
}

void solve(){

    int count = 0;

    for(int i = 0; i < s1.length(); i++){
        if(same(s1,s2,i) == 1)
            count++;
    }

    cout << count;
}

int same(string s1,string s2,int k){
    
    for(int i = 0; i <  s2.length(); i++){
        if(s2[i] != s1[i+k]){
            return 0;
        }
        return 1;
    }
}

