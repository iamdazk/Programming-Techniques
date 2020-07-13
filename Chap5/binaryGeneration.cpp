#include<iostream>
#include<cstring>

using namespace std;

void fill(int a, int b, char k, string& t);
void binGen(int n);

int main() {

	int n;
	cin >> n;

	binGen(n);

	return 0;
}

void binGen(int n) {

	string temp = "";
	temp.resize(n);
	fill(0, n - 1, '0',temp);

	int i;
	do {
		cout << temp << '\n';
		i = n - 1;
		while (i > -1 && temp[i] == '1') i--;
		if (i > -1) {
			temp[i] = '1';
			fill(i + 1, n, '0', temp);
		}
	} while (i > -1);
}

void fill(int a, int b, char k,string &t) {

	for (int i = a; i <= b; i++) {
		t[i] = k;
	}
}