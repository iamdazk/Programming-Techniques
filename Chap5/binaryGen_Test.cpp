#include <iostream>
#include <string>

using namespace std;

int n;

void binGen();
void firstBin(string &temp);

int main() {

    cin >> n;

    binGen();

    return 0;
}

void binGen(){

    string temp;
    firstBin(temp);
    int i;

    do{
        cout << temp << endl;
        i = n - 1;
        while(i >= 0 && temp[i] == '1') i--;
        if(i >= 0){
            temp[i] = '1';
            for(int j = i+1 ; j < n ; j++){
                temp[j] = '0';
            }
        }
        if(i == -1) break;
    }while(i >= 0);

}

void firstBin(string &temp){

    for(int i = 0 ; i < n ; i++){
        temp += '0';
    }
}




