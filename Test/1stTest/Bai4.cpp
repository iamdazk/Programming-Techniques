#include<iostream>
#include<math.h>

using namespace std;

long float result(int x, int n);

int main() {

	int x, n;
	cin >> x >> n;
	long float t = result(x, n);
	cout << "Ket qua cua e mu " << x << " la: " << t;
}

long float result(int x, int n) {

	int giaiThua = 1;
	long float sum = 1;
	int i, j;
	for (i = 1; i <= n ; i++) {

		giaiThua *= i;
		sum += float(pow(x, i)) / giaiThua;
	}
	return sum;
}