#include<iostream>
#include<string>
#include<algorithm>

#define cap 1000000

using namespace std;

void chen(string &a,int k);
string bigNumSum(string &a,string &b);
int toInt(char x);
char toChar(int y); 
string Fibonacci();

int n;
string F[cap];

int main(){

    cin >> n;

    cout << Fibonacci();

    return 0;
}

void chen(string &a,int k){

    reverse(a.begin(),a.end());
    for(int i = 0 ; i < k ; i++){
        a += '0';
    }
    reverse(a.begin(),a.end());
}

string bigNumSum(string &a,string &b){

    if(a.length() < b.length())
        chen(a,b.length() - a.length());
    else
        chen(b,a.length() - b.length());

    string sum = "";
    int temp = 0;
    for(int i = a.length() - 1; i >= 0;i --){
        temp += toInt(a[i]) + toInt(b[i]);
        sum += toChar(temp % 10);
        temp /= 10;
    }
    if(temp != 0)
        sum += toChar(temp % 10);

    reverse(sum.begin(),sum.end());

    return sum;
}

int toInt(char x){

    return ( x - '0');
}

char toChar(int y){
    
    return( y + '0');
}

string Fibonacci(){

    F[0] = '1';
    F[1] = '1';
    for(int i = 2; i <= n;i++){
        F[i] = bigNumSum(F[i-1],F[i-2]);
        //cout << "i= " << i << " " << F[i] << endl;
    }

    return F[n];
}

