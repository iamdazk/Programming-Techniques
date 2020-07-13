#include<iostream>
#include<cstring>
#define capacity 100

using namespace std;

void reserve(char S[]);

int main() {

	char S[capacity];
	gets_s(S);
	reserve(S);

	return 0;
}

void reserve(char S[]) {

	char KQ[capacity];
	KQ[0] = '\0';
	int t = strlen(S) - 1;
	while (t >= 0) {
		while (t >= 0 && S[t] == 32) {
			strcat_s(KQ, " ");
			t--;
		}
		char temp[capacity];
		int ntemp = 0;
		while (t >= 0 && S[t] != 32) {
			temp[ntemp++] = S[t];
			t--;
		}
		temp[ntemp] = '\0';
		_strrev(temp);
		strcat_s(KQ, temp);
	}
	cout << KQ;
}