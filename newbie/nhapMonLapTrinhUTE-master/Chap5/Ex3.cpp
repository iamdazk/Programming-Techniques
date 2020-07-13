#include<iostream>
#include<cstring>

#define capacity 100

using namespace std;

int main() {

	char S[capacity];
	gets_s(S);
	_strrev(S);
	cout << "Reserve char: ";
	puts(S);

	return 0;
}