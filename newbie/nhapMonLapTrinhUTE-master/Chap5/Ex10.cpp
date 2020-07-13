#include<iostream>
#include<cstring>

#define capacity 100

using namespace std;

void progress(char S[]);

void main() {

	char S[capacity];
	gets_s(S);
	progress(S);
}

void progress(char S[]) {

	int l = strlen(S);
	S[0] -= 32;
	for (int i = 1; i < l; i++) {
		if (S[i] == ' ')
		{
			S[i + 1] -= 32;
		}
	}
	puts(S);
}