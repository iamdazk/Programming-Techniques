#include<iostream>
#include<string>

using namespace std;

void input(char S[]) {

	cout << "Nhap vao chuoi ki tu: ";
	cin >> S;
}

int totalString(char S[]) {

	int sum = 0;
	int i = 0;
	while (i < strlen(S)) {
		int so = 0;
		while (S[i] >= '0' && S[i] <= '9') {
			so = so * 10 + S[i] - '0';
			i++;
		}
		sum = sum + so;
		i++;
	}
	return sum;
}

int main() {

	char S[50];
	input(S);
	cout << "Tong ki tu so trong chuoi la: " << totalString(S);
}