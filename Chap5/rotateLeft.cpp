#include <iostream>

using namespace std;

void input();
void onBit(int& n, int i);
void offBit(int& n, int i);
int getBit(int& n, int i);
void rotateLeft();
void bitDisplay();

int n, i;

int main() {

    input();
    bitDisplay();
    rotateLeft();
    bitDisplay();

    return 0;
}

void input() {

    cin >> n >> i;
}

void onBit(int& n, int i) {

    n |= 1 << i;
}

void offBit(int& n, int i) {

    n &= ~(1 << i);
}

int getBit(int& n, int i) {

    return (n >> i) & 1;
}

void rotateLeft() {

    for (int j = 0; j < i; j++) {
        int temp = getBit(n, 31);
        n <<= 1;
        if (temp) onBit(n, 0);
        else offBit(n, 0);
    }
}

void bitDisplay() {

    for (int i = 31; i >= 0; i--) {
        cout << getBit(n, i);
    }
    cout << endl;
}

