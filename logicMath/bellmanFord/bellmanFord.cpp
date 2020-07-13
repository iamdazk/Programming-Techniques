#include<iostream>

#define cap 1000

using namespace std;

void input();
void bellmanFord();
void show();

bool stop;
int v,e,s,f;
int trace[cap];
int d[cap],mtk[cap][cap];

int main(){

    input();
    bellmanFord();
    show();

    return 0;

}

void input(){

    cin >> v >> e >> s >> f;
    for(int i=0;i < v;i++){
        for(int j = 0 ;j < v ; j++){
            if(j == i){
                mtk[i][j] = 0;
            }
            else {
                mtk[i][j] = 9999999;
            }
        }
    }

    for(int i = 0 ; i < e; i++){
        int v1,v2,weight;
        cin >> v1 >> v2 >> weight;
        mtk[v1][v2] = weight;
    }
}

void bellmanFord(){

    for(int i = 0;i < v ; i ++){
        d[i] = 9999999;
    }
    d[s] = 0;

    for(int i = 0 ; i < v ; i ++){
        stop = true;
        for(int j = 0 ; j < v; j++){
            for(int k = 0 ; k < v ; k++){
                cout << "k = " << k << "d[k] =" << d[k] << endl;
                if(d[j] > d[k] + mtk[j][k]){
                    d[j] = d[k] + mtk[j][k];
                    trace[j] = k;
                    stop = false;
                }
            }
        }
    }
}

void show(){

    if(d[f] == 9999999)
        cout << "There is no path from " << s << " to " << f;
    else 
        cout << "Distance from " << s << " to " << f << " = " <<  d[f] << endl ;
    while(f != s){
        cout << f << " <- ";
        f = trace[f];
        cout << "0";
    }
}

