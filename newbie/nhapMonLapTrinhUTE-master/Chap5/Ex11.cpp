#include<iostream>
#include<cstring>

#define capacity 100

using namespace std;

bool checkSubString(char S[], char A[]);

void main() {

	char S[capacity],A[capacity];
	gets_s(S);
	gets_s(A);
	if (checkSubString(S, A))
		cout << A << " is a substring of " << S;
	else
		cout << A << " is not a substring of " << S;
}

bool checkSubString(char S[],char A[]) {

	int l = strlen(S);
	int m = strlen(A);
	for (int i = 0; i < l; i++) {
		int j = 0;
		if (m > l)
			return false;
		if (S[i] == A[j]) {
			while (S[i] == A[j] && j < m) {
				j++;
				i++;
			}
			if (j == m)
				return true;
		}
	}
	return false;
}