#include<iostream>
#include<cstring>

#define capacity 100

using namespace std;

int countWord(char S[]);

int main() {

	char S[capacity];
	gets_s(S);
	
	cout << "Words in this character: ";
	cout << countWord(S);

	return 0;
}

int countWord(char S[]) {

	int sum = 0;
	int l = strlen(S);
	for (int i = 0; i < l; i++) {
		if (S[i] == ' ')
			sum++;
	}
	return sum + 1;

}