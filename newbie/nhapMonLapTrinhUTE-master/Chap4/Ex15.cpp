#include<iostream>

using namespace std;

void input(float& a, float& b, float& c, float& d) {
	
	cin >> a >> b >> c >> d;
}

float findMax(float a, float b, float c, float d) {

	float max = a;
	if (max < b)
		max = b;
	if (max < c)
		max = c;
	if (max < d)
		max = d;
	return max;
}

void output(float t) {

	cout << "Max value: " << t;
}

int main() {

	float a, b, c, d;
	input(a, b, c, d);
	float t = findMax(a, b, c, d);
	output(t);
}