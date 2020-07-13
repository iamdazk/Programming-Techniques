#include<iostream>
#include<cstring>

#define capacity 100

using namespace std;

void nFirstChar(char S[], int pos, int n);
void nEndChar(char S[], int pos, int n);

int main() {

	char S[capacity];
	gets_s(S);
	int pos, n;
	cin >> pos >> n;
	nFirstChar(S, pos, n);
	nEndChar(S, pos, n);

	return 0;
}

void nFirstChar(char S[],int pos,int n) {

	int l = strlen(S);
	char temp[capacity];
	int ntemp = 0;
	for (int i = pos; i < pos+n; i++) {
		temp[ntemp]= S[i];
		ntemp++;
	}
	temp[ntemp] = '\0';
	cout << n << " characters starts at " << pos << ": ";
	puts(temp);
}

void nEndChar(char S[], int pos, int n){

	int l = strlen(S);
	char temp[capacity];
	int ntemp = 0;
	for (int j = l - 1; j > (l - 1 - n); j--) {
		temp[ntemp] = S[j];
		ntemp++;
	}
	temp[ntemp] = '\0';
	_strrev(temp);
	cout << n << " characters ends at " << pos << ": ";
	puts(temp);
}