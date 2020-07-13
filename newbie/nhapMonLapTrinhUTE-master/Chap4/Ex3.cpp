#include<iostream>
#include<iomanip>

using namespace std;

void input(float& length, float& width);
float perimeter(float length, float width);
void output(float t);

int main() {

	float length, width;
	input(length, width);
	float t = perimeter(length, width);
	output(t);
}

void input(float& length, float& width) {

	cin >> length >> width;
}

float perimeter(float length, float width) {

	float t = (length + width) / 2;
	return t;

}

void output(float t) {

	cout << fixed << setprecision(2)<< t;
}