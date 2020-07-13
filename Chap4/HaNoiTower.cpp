#include <iostream>

using namespace std;

int n;

void hnTower(int n, char trai, char giua, char phai);

int main() {

    cin >> n;
    hnTower(n,'A', 'B', 'C');
    return 0;
}

void hnTower(int n, char trai, char giua, char phai) {
    if (n == 1) {
        cout << "Move disk from " << trai << "--->" << phai << endl;
    }
    else {  
        hnTower(n-1, trai, phai, giua);
        hnTower(1,trai,giua,phai);
        hnTower(n-1,giua, trai , phai);
    }
}

