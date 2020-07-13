#include <iostream>
#include <string>
#include <algorithm>

#define cap 100

using namespace std;

string s1,s2;
int l[cap][cap];

void solve();

int main() {

    cin >> s1 >> s2;

    solve();

    return 0;
}

void solve(){

    int m = s1.length();
    int n = s2.length();

    for(int i=0; i<m; i++){
        for(int j=0; j<n;j++){
            if(i==0 || j==0){
                l[i][j] = 0;
            }
            else{
                if(s1[i-1] == s2[j-1]){
                    l[i][j] = l[i-1][j-1] +1;
                }
                else{
                    l[i][j] = max(l[i-1][j],l[i][j-1]);
                }
            }
        }
    }

    int i = m;
    int j = n;

    string rs = "";

    while(i > 0 && j > 0){
        if(s1[i-1] == s2[j-1]){
            rs += s1[i-1];
            i--;
            j--;
        }
        else{
            if(l[i-1][j] > l[i][j-1]){
                i--;
            }
            else{
                j--;
            }
        }
    }

    reverse(rs.begin(),rs.end());

    //cout << rs;

    cout << rs.length();

}

