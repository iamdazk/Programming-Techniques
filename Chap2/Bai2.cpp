#include<iostream>
#include<cstring>

#define capacity 100

using namespace std;

void input(int& n, int arr[],int &x) {

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cin >> x;
}

int findValue(int n, int arr[],int x) {

	for (int i = 0; i < n; i++) {
		if (i == x)
			return arr[i];
	}
}

void outputInBinary(int t) {

	char temp[capacity];
	int ntemp = 0;
	while (t >= 0) {
		temp[ntemp] = t % 2 + '0';
		ntemp++;
		t /= 2;
		if (t == 0)
			break;
	}
	temp[ntemp] = '\0';
	_strrev(temp);
	puts(temp);
}

int main() {

	int n, arr[capacity],x;
	input(n, arr,x);
	int t = findValue(n, arr, x);
	outputInBinary(t);
}