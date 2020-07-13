// 2AS34ASDF342B có tổng là 2+34+342=378
#include <iostream> 
#include <conio.h> 
#include <string>

using namespace std;

int main(){ 
    string str; 
    int i=0 ;
    int j,n;
    int _sum =0;
    cin >> str;

    while(i <= str.length() - 1) {
        if(str[i]<='9' && str[i]>='0'){ 
            j=i; 
            n=0;            
            while(j<=str.length()-1 && (str[j]<='9' && str[j]>='0')) { 
                n = 10*n+(int)str[j]-48; 
                j++; 
            }  
        _sum += n; 
        i = j; 
        } 
        else i++;
    }
            
    cout << _sum;    
}