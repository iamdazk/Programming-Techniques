#include <iostream>

#define cap 100

using namespace std;

void scalarNearMatrix(int nearMatrix[][cap]);

int nearMatrix[cap][cap] = {0};

int main() {

    scalarNearMatrix(nearMatrix);

    return 0;
}

void scalarNearMatrix(int nearMatrix[][cap]) {

    int v,e;
    cin >> v >> e;

    for (int i = 0 ; i < e ; i++) {
        int _i,_j,_t;
        cin >> _i >> _j >> _t;
        nearMatrix[_i][_j] += _t;
        if (_i != _j) {
            nearMatrix[_j][_i] += _t;
        }
    }

    
    // for (int i = 0 ; i < v ; i++) {
    //     for (int j = 0 ; j < v; j++) {
    //         cout << nearMatrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    int ss = 0;
    int vong = 0;
    int treo = 0;
    int colap = 0;


    for (int i = 0 ; i < v ; i++) {
        int ngang = 0;
        int doc = 0;

        for (int j = 0 ; j < v ; j++) {
            if (i == j && nearMatrix[i][i] != 0) {
                vong++;
            } else {
                ngang += nearMatrix[i][j];
                doc += nearMatrix[j][i];
                if (ngang >= 2) ss++;
                if (doc >= 2) ss++;
            
            }
        } 
        if (ngang + doc == 0) colap++;
        else if (ngang + doc == 1) treo++;
    }

    cout << "ss = " << ss/2 << " treo = " << treo << " vong = " << vong << " colap = " << colap;


}

/*

4 4
0 1 1  
1 2 1
1 2 1
2 2 1

*/


