#include<iostream>
#include<algorithm>

using namespace std;

void SymString(string s);

int main() {

	string s;
	cin >> s;

	SymString(s);

	return 0;
}

void SymString(string s) {

	string temp = s;
	reverse(temp.begin(), temp.end());
	if (temp == s) cout << "Chuoi doi xung";
	else cout << "Chuoi khong doi xung";
}


