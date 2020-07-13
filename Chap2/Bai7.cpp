#include<iostream>
#include<cstring>

#define capacity 100

using namespace std;

void deleteSpace(int a, char S[]) {

	int l = strlen(S);
	for (int i = a; i < l - 1; i++) {
		S[i] = S[i + 1];
	}
	l--;
	S[l] = '\0';
}

void removeExtraSpaces(char S[]) {

	int l = strlen(S);
	S[l] = '\0';
	for (int i = 0; i < l - 1; i++) {

		if (S[0] == ' ') {
			deleteSpace(0, S);
			l--;
		}
		if (S[l - 1] == ' ') {
			deleteSpace(l - 1, S);
			l--;
		}
		if (S[i] == ' ') {
			int j = i + 1;
			while (S[j] == ' ') {
				deleteSpace(j, S);
				l--;
			}
		}
	}
}

void struprWord(char S[]) {

	int l = strlen(S);
	S[l] = '\0';
	S[0] -= 32;
	for (int k = 1; k < l - 1; k++) {
		if (S[k] == ' ')
			S[k + 1] -= 32;
	}
	puts(S);
}


int main() {

	char S[capacity];
	gets_s(S);
	removeExtraSpaces(S);
	struprWord(S);

	return 0;
}
