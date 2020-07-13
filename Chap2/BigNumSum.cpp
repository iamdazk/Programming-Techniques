#include<iostream>
#include<cstring>
#define capacity 300
using namespace std;

void standardlize(string& S1, string& S2);
int toInt(char k);
char toChar(int k);
void matchStr(string& S, char k);
void hieu2So(string S1, string S2);
//string compare(string a, string b);
//string minIn3Numbers(string a, string b, string c);

int main() {

	string S1, S2;
	cin >> S1 >> S2;
	/*cout << minIn3Numbers(S1, S2, S3);*/
	standardlize(S1, S2);
	hieu2So(S1, S2);

	return 0;
}

void standardlize(string& a, string& b) {

	string temp;
	int n = a.size() - b.size();
	if (n > 0) {
		for (int i = 0; i < n; i++) {
			temp += '0';
		}
		temp += b;
		b = temp;
	}
	else {
		n *= -1;
		for (int i = 0; i < n; i++) {
			temp += '0';
		}
		temp += a;
		a = temp;
	}
}

int toInt(char k) {

	return k - '0';
}

char toChar(int k) {

	return k + '0';
}

void matchStr(string& S, char k) {

	string temp;
	temp += k;
	temp += S;
	S = temp;
}

void hieu2So(string a, string b) {

	string sum;
	int next = 0;
	for (int i = a.size() - 1; i >= 0; i--) {
		next += toInt(a[i]) - toInt(b[i]);
		matchStr(sum, toChar(next % 10));
		next /= 10;
	}
	if (next != 0)
		matchStr(sum, toChar(next));
	if (a > b)
		cout << sum;
	else
		cout << "-" << sum;
}

//string compare(string a, string b) {
//
//	string min;
//	long long l1 = a.size();
//	long long l2 = b.size();
//	if (l1 - l2 > 0)
//		min = a;
//	if (l1 - l2 < 0) {
//		min = b;
//	}
//	if (l1 == l2) {
//		
//			min = a;
//		else
//			min = b;
//	}
//	return min;
//}
//
//string minIn3Numbers(string a, string b, string c) {
//
//	string min = a;
//	if (min > compare(b, c))
//		min = compare(b, c);
//	if (min > compare(a, c))
//		min = compare(a, b);
//	return min;
//}

