#include<iostream>
#include<string.h>
#define capacity 301
using namespace std;

void insert(char S[], int k);
void standardized(char S1[], char S2[]);
void countSum(char S1[], char S2[], char S[]);

int main() {

	char S1[capacity], S2[capacity], S[capacity];
	gets_s(S1);
	gets_s(S2);
	standardized(S1, S2);
	countSum(S1, S2, S);
	puts(S);
}

void countSum(char S1[], char S2[], char S[]) {

	_strrev(S1);
	_strrev(S2);
	int l = strlen(S1);
	int temp = 0;
	for (int i = 0; i < l; i++) {
		int t = (S1[i] - '0') + (S2[i] - '0') + temp;
		S[i] = t % 10 + '0';
		temp = t / 10;
	}
	if (temp == 1)
		S[l++] = '1';
	S[l] = '\0';
	_strrev(S);
}

void insert(char S[], int k) {

	_strrev(S);
	int l = strlen(S);
	for (int i = 0; i < k; i++) {
		S[l + i] = '0';
	}
	S[l + k] = '\0';
	_strrev(S);
}

void standardized(char S1[], char S2[]) {

	int l1 = strlen(S1);
	int l2 = strlen(S2);
	if (l1 > l2) {
		insert(S2, l1 - l2);
	}
	else
		insert(S1, l2 - l1);
	
}