#include<iostream>
#include<cstring>

#define capacity 100

using namespace std;

int countNumCharacter(char S[]);

void main() {

	char S[capacity];
	gets_s(S);
	cout << "Total numbers in this character: ";
	cout << countNumCharacter(S);
}

int countNumCharacter(char S[]) {

	int l = strlen(S);
	int sum = 0;
	for (int i = 0; i < l; i++) {
		if (S[i] >= '0' && S[i] <= '9')
			sum += S[i]-'0';
	}
	return sum;
}
