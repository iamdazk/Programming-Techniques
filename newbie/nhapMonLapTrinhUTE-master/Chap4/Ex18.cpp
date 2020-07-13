#include<iostream>

using namespace std;

void input(float& a, float& b, float& c) {

	cin >> a >> b >> c;
}

void triangularClassification(float a, float b, float c) {

	if ((a + b > c) && (b + c > a) && (a + c > b) && (a > 0) && (b>0) &&(c>0)) {
		if ((a == b) && (b == c) && (a == c))
			cout << "Tam giac deu";
		else if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (c * c + b * b == a * a)) {
			if (a == b || b == c || a == c) {
				cout << "Tam giac vuong can";
			}
			else {
				cout << "Tam giac vuong";
			}
		}
		else {
			cout << "Tam giac thuong";
		}
	}
	else {
		cout << "Khong phai tam giac";
	}
}

int main() {

	float a, b, c;
	input(a, b, c);
	triangularClassification(a, b, c);

	return 0;
}