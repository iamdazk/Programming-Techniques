#include<iostream>
#include<cmath>

using namespace std;

void input(float &a) {

	cin >> a;
}

int layPhanNguyen(float a) {

	return int(a);
}

void output(int temp) {

	cout << temp;
}


int main() {

	float a;
	input(a);
	int temp = layPhanNguyen(a);
	output(temp);
}