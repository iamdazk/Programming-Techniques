#include<iostream>
#include<vector>
#include<algorithm>
#include <climits>

#define cap 50
using namespace std;

int v,e,s,f;
int mtk[cap][cap];
bool free1[cap];
int d[cap];
int trace[cap];

void input();
void init();
void dijkstraAlgorithm();
void show();

int main(){

    input();
  
    init();

    dijkstraAlgorithm();

    show();

    return 0;
}

void input(){

    cin >> v >> e >> s >> f;

    for (int i = 0 ; i < v ; i++) {
        for (int j = 0 ; j < v ; j++) {
            if (j == i) {
                mtk[i][j] = 0;
            } else {
                mtk[i][j] = 99999999;
            }
        }
    }

    for (int i = 0 ; i < e ; i++) {
        int v1, v2, weight;
        cin >> v1 >> v2 >> weight;
        mtk[v1][v2] = weight;
    }

}

void init(){

    for(int i=0;i<v;i++){
        d[i] = INT_MAX;
        free1[i] = true;
    }
    d[s] = 0;

}

void dijkstraAlgorithm(){

    while(true){
        int u = -1;
        int min = INT_MAX;

        // Tim dinh tu do co d[u] min
        for(int i=0;i<v;i++){
            if(d[i] < min && free1[i] == true){
                min = d[i];
                u = i;
            }
        }
       
        // Khong co duong di tu s -> f, or da tim dc duong di
        if( u == -1 || u == f) break;

        // co dinh u
        free1[u] = false;

        for(int j = 0 ; j < v ; j++){

            if(free1[j] && d[j] > d[u] + mtk[u][j]){
            d[j] = d[u] + mtk[u][j];
            trace[j] = u;
            }
        }
    }
}

void show(){

    if(d[f] == INT_MAX)
    cout << "There is no path from " << s << " " << f;
    else{
        cout << "Distance from " << s << " to " << f << " = " << d[f] << endl;
        while(f != s){
            cout << f << "<-";
            f = trace[f];
        }
        cout << 0 << endl;
    }
}




/*
5 10 0 4
0 1 10
1 3 1
3 4 4
4 3 6
2 4 2
2 3 9
2 1 3
1 2 2
0 2 5
4 0 7
*/


