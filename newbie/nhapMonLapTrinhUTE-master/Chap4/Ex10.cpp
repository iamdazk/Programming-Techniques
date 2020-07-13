#include<iostream>
#include<cmath>

using namespace std;

void input(int& a, int& b, int& c) {

	cin >> a >> b >> c;
}

void ptBacHai(int a, int b, int c) {

	if (a == 0) {
		if (b == 0) {
			if (c == 0)
				cout << "PT vo so nghiem";
			else
				cout << "PT vo nghiem";
		}
		else {
			float temp = float(-c) / b;
			cout << "PT co nghiem duy nhat: " << temp;
		}
	}
	else {
		float delta = b * b - 4 * a * c;
		if (delta > 0) {
			float x1 = (-b + sqrt(delta)) / (2 * a);
			float x2 = (-b - sqrt(delta)) / (2 * a);
			cout << "PT co 2 nghiem phan biet: " << x1 << " " << x2;
		}
		else if (delta == 0) {
			float temp = float(-b) / (2 * a);
			cout << "PT co 1 nghiem kep: " << temp;
		}
		else if (delta < 0)
			cout << "PT vo nghiem";
	}
}

int main() {

	int a, b, c;
	input(a, b, c);
	ptBacHai(a, b, c);
}