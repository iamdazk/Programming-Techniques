#include<iostream>
#include<cstring>

#define ll long long
#define capacity 100

using namespace std;

ll hexToDec(char S[]);

int main() {

	char S[capacity];
	gets_s(S);
	cout << "Hexadecimal to Decimal: ";
	cout << hexToDec(S);

	return 0;
}

ll hexToDec(char S[]) {

	_strrev(S);
	ll result = 0;

	for (int i = 0; i < strlen(S); i++) {
		if (S[i] >= '0' and S[i] <= '9') {
			result += (S[i] - '0') * pow(16, i);
		}
		else {
			result += (S[i] - 55) * pow(16, i);
		}
	}

	return result;
}