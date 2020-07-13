#include<iostream>
#include<string.h>
#define capacity 100

using namespace std;

void doiNhiPhan(int n) {
	
	char A[capacity];
	int i = 0;
	while (n >= 0) {
		A[i] = n % 2 + '0';
		n /= 2;
		i++;
		if (n == 0)
			break;
	}
	A[i] = '\0';
	_strrev(A);
	puts(A);
}

void output(int n) {

	for (int i = 0; i <= n; i++) {
		cout << i << " = ";
		doiNhiPhan(i);
	}
}

int main() {
	int n;
	cin >> n;
	output(n);

}
