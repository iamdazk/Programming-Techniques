#include<iostream>
#define capacity 100

using namespace std;

typedef struct PS {
	int ts;
	int ms;
};

int ucln(int a, int b) {

	if (b == 0)
		return a;
	return ucln(b, a % b);
}

void rutGon(PS &n) {

	int temp = ucln(n.ts, n.ms);
	n.ts /= temp;
	n.ms /= temp;
	if (n.ms < 0)
	{
		n.ms *= -1;
		n.ts *= -1;
	}
}

void inputPS(PS &n) {

	cout << "Nhap vao tu so: ";
	cin >> n.ts;
	do {
		cout << "Nhap vao mau so: ";
		cin >> n.ms;
	} while (n.ms == 0);
}

void input(int& n, PS arr[]) {

	cout << "Nhap vao so luong: ";
	cin >> n;
	cout << "\nNhap vao mang: \n";
	for (int i = 0; i < n; i++) {
		cout << "Nhap vao phan tu thu " << i << ": \n";
		inputPS(arr[i]);
	}
}

PS tinhTong(PS n1, PS n2) {

	PS result;
	result.ms = n1.ms * n2.ms;
	result.ts = n1.ts * n2.ms + n2.ts * n1.ms;
	return result;
}

PS tongMang(int n, PS arr[]) {

	PS sum = arr[0];
	for (int i = 1; i < n; i++) {
		sum = tinhTong(sum, arr[i]);
	}
	rutGon(sum);
	return sum;
}

float giaTriThuc(PS a){

	return  float(a.ts) / a.ms;
}

PS maxPS(int n, PS arr[]) {

	PS max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (giaTriThuc(max) < giaTriThuc(arr[i]))
			max = arr[i];
	}
	return max;
}

PS minPS(int n, PS arr[]) {

	PS min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (giaTriThuc(min) > giaTriThuc(arr[i]))
			min = arr[i];
	}
	return min;
}

void arrangeArray(int n, PS arr[]) {

	PS temp;
	for (int i = 0; i < (n-1); i++) {
		for (int j = i + 1; j < n; j++) {
			if (giaTriThuc(arr[i]) > giaTriThuc(arr[j])) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void outputArr(int n, PS arr[]) {

	for (int i = 0; i < n; i++) {
		cout << arr[i].ts << "/" << arr[i].ms << " ";
	}
	cout << endl;
}


int main() {
	int n;
	PS arr[capacity];
	input(n, arr);

	cout << "Tong cac phan so trong mang: ";
	PS sum = tongMang(n, arr);
	cout << sum.ts << "/" << sum.ms << endl << endl;

	cout << "Phan so lon nhat trong mang: ";
	PS max = maxPS(n, arr);
	cout << max.ts << "/" << max.ms << endl << endl;

	cout << "Phan so nho nhat trong mang: ";
	PS min = minPS(n, arr);
	cout << min.ts << "/" << min.ms << endl << endl;

	cout << "Sap xep mang tang dan: ";
	arrangeArray(n, arr);
	outputArr(n, arr);
}
