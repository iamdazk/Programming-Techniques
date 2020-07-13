//C++ Lib
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
//C Lib
#include <cmath>
#include <climits>
#include <fstream>
//namespace
using namespace std;
int main() {
    
    //doc

    ifstream fin;
    fin.open("test.txt");
    int n;
    int arr[1000];
    fin >> n;
    int sum = 0;
    for (int i = 0 ; i < n ; i++) {
        fin >> arr[i];
        sum += arr[i];
    } 

    //ghi
    ofstream fout;
    fout.open("out.txt");
    fout << sum;

    fin.close();
    fout.close();

    return 0;
}