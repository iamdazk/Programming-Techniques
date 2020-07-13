#include<iostream>
#include<cmath>

using namespace std;

void input(float& n) {

	cin >> n;
}

int roundNumber(float n) {

	int t = int(n);
	int result;
	if (n - t >= 0.5)
		result = ceil(n);
	else
		result = floor(n);
	return result;
}

void output(int temp) {

	cout << temp;
}

int main() {
	
	float n;
	input(n);
	int temp = roundNumber(n);
	output(temp);

	return 0;
}