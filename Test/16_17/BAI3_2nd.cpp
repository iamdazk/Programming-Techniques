#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int solve(vector<int> a);
int lower_bound(vector<int> l, int x);
int upper_bound(vector<int> l1, int x);

int main() {
    int n;

    cin >> n;
    vector<int> a(n); 

    for (int &i : a) cin >> i;

    cout << solve(a);

    return 0;
}


int solve(vector<int> a) {
    
    int n = a.size();
    int _max = 0;

    //vector<int> l(so_phan_tu, gia_tri_khoi_tao);
    vector<int> l(n, INT_MAX); 
    vector<int> l1(n, INT_MIN);

    l[0] = a[0];
    l1[0] = a[0];

    for(int i = 1; i < n;i++){

        int index;
        index = lower_bound(l,a[i]);
        int index1;
        index1 = upper_bound(l1,a[i]);

        //cout << index << " " << index1 << endl;

        _max = max(_max,index);
        _max = max(_max,index1);

        l[index] = a[i];
        l1[index1] = a[i];

    }

    return _max + 1;
}

//tim phan tu dau tien lon hon x
int lower_bound(vector<int> l, int x) {

    int n = l.size();
    int i = 0;
    while(l[i] <= x && i < n) i++;
    return i;   
}

//tim phan tu dau tien nho hon x
int upper_bound(vector<int> l1, int x) {
    
    int n = l1.size();
    int i = 0;
    while(l1[i] >= x && i < n) i++;
    return i;
}