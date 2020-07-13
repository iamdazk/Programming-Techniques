#include<iostream>
#define cap 1000

int n;
int arr[cap];

using namespace std;

void input(int& n, int arr[]);
void subset(int k);
void firstConfi(int k, int temp[]);
void showSubset(int k, int temp[]);

int main() {

    input(n, arr);

    cout << "{}" << "\n";
    for (int i = 1; i <= n; i++) {
        subset(i);
    }

    return 0;
}

void input(int& n, int arr[]) {

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void subset(int k) {

    int temp[cap];
    firstConfi(k, temp);

    int i;
    do {
        showSubset(k, temp);
        i = k - 1;

        while (i >= 0 && temp[i] == n - k + i) i--;
        if (i >= 0) {
            temp[i]++;
            for (int j = i + 1; j < k; j++) {
                temp[j] = temp[j - 1] + 1;
            }
        }
    } while (i > -1);
}

void firstConfi(int k, int temp[]) {

    temp[0] = 0;
    for (int i = 1; i < k; i++) {
        temp[i] = temp[i - 1] + 1;
    }
}

void showSubset(int k, int temp[]) {

    cout << "{" << " ";
    for (int i = 0; i < k; i++) {
        cout << arr[temp[i]] << " ";
    }
    cout << "}" << "\n";
}
