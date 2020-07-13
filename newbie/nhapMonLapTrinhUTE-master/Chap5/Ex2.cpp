#include<iostream>

#define capacity 100

using namespace std;

void decToBinary(int n);
void decToOctal(int n);
void decToHexadecimal(int n);

int main() {

	int n;
	cout << "Input Dec: ";
	cin >> n;

	cout << "Dec to Binary: ";
	decToBinary(n);

	cout << "Dec to Oct: ";
	decToOctal(n);

	cout << "Dec to Hexadecimal: ";
	decToHexadecimal(n);

	return 0;
}

void decToBinary(int n) {

	char bin[capacity];
	int nbin = 0;
	while (n >= 0) {

		bin[nbin] = n % 2 + '0';
		n /= 2;
		nbin++;

		if (n == 0) {
			break;
		}
	}
	bin[nbin] = '\0';
	_strrev(bin);
	puts(bin);

}

void decToOctal(int n) {

	char oct[capacity];
	int noct = 0;
	while (n >= 0) {

		oct[noct] = n % 8 + '0';
		n /= 8;
		noct++;
		if (n == 0)
			break;
	}
	oct[noct] = '\0';
	_strrev(oct);
	puts(oct);

}

void decToHexadecimal(int n) {

	char hex[capacity];
	int nhex = 0;
	while (n >= 0) {

		int temp = n % 16;
		if (temp < 10) {
			hex[nhex] = temp + '0';
		}
		else {
			hex[nhex] = temp + 55;
		}
		n /= 16;
		nhex++;
		if (n == 0)
			break;
	}
	hex[nhex] = '\0';
	_strrev(hex);
	puts(hex);
}

