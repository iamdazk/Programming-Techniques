#include<iostream>
#define SIZE 50

using namespace std;

/*
	1. Nhập/Xuất n phân số
	2. Rút gọn mọi phân số
	3. Đếm số lượng phân số âm/dương
	4. Tìm phân số dương đầu tiên
	5. Tìm phân số nhỏ nhất / lớn nhất trong mảng
	6. Sắp xếp mảng tăng dần/ giảm dần
*/

typedef struct PS {
	int ts;
	int ms;
};

void inputPS(PS& n) {
	cout << "Nhap tu so: ";
	cin >> n.ts;
	do {
		cout << "Nhap mau so: ";
		cin >> n.ms;
	} while (n.ms == 0);
	if (n.ms < 0)
	{
		n.ms *= -1;
		n.ts *= -1;
	}
}

void inputArr(int& n, PS arr[]) {
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan so thu " << i << ":" << endl;
		inputPS(arr[i]);
	}
}

int ucln(int a, int b) {
	if (b == 0)
		return a;
	return
		ucln(b, a % b);
}

void outputArr(int n, PS arr[])
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i].ts << "/" << arr[i].ms << " ";
	}
	cout << endl;
}

void rutGon(PS& n) {
	int temp = ucln(n.ts, n.ms);
	n.ts /= temp;
	n.ms /= temp;
	if (n.ms < 0)
	{
		n.ms *= -1;
		n.ts *= -1;
	}
}

void rutGonAll(int n, PS arr[]) {
	PS arr1[SIZE];
	for (int i = 0; i < n; i++) {
		arr1[i] = arr[i];
	}
	for (int i = 0; i < n; i++) {
		rutGon(arr1[i]);
	}
	outputArr(n, arr1);
}

bool soAmDuong(PS n) {
	if (n.ts > 0 && n.ms > 0)
		return true;
	else return false;
}

int demDuong(int n, PS arr[]) {
	int soduong = 0;
	int soam = 0;
	for (int i = 0; i < n; i++) {
		if (soAmDuong(arr[i]))
			soduong++;
	}
	return soduong;
}

void psDuongDau(int n, PS arr[]) {
	for (int i = 0; i < n; i++) {
		if (arr[i].ts > 0 && arr[i].ms > 0) {
			cout << arr[i].ts << "/" << arr[i].ms;
			break;
		}
	}
	cout << endl;
}

float giaTriThuc(PS n) {
	return float(n.ts) / n.ms;
}

PS maxPS(int n, PS arr[]) {
	PS max = arr[0];
	for (int i = 1; i < n; i++) {
		if (giaTriThuc(max) < giaTriThuc(arr[i]))
			max = arr[i];
	}
	return max;
}

PS minPS(int n, PS arr[]) {
	PS min = arr[0];
	for (int i = 1; i < n; i++) {
		if (giaTriThuc(min) > giaTriThuc(arr[i]))
			min = arr[i];
	}
	return min;
}

void sxMangTang(int n, PS arr[]) {
	PS temp;
	for (int i = 0; i < (n - 1); i++)
		for (int j = i + 1; j < n; j++)
		{
			if (giaTriThuc(arr[i]) > giaTriThuc(arr[j]))
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	cout << "Sap xep mang tang dan: ";
}

void sxMangGiam(int n, PS arr[]) {
	PS temp;
	for (int i = 0; i < (n - 1); i++)
		for (int j = i + 1; j < n; j++)
		{
			if (giaTriThuc(arr[i]) < giaTriThuc(arr[j]))
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	cout << "Sap xep mang giam dan: ";
}

int main()
{
	int n;
	PS arr[SIZE];
	inputArr(n, arr);
	cout << "Xuat mang: ";
	outputArr(n, arr);
	cout << "Mang sau khi rut gon: ";
	rutGonAll(n, arr);
	demDuong(n, arr);
	int result = demDuong(n, arr);
	cout << "So Duong: " << result << endl;
	cout << "So Am: " << n - result << endl;
	cout << "Phan so duong dau tien: ";
	psDuongDau(n, arr);
	PS max = maxPS(n, arr);
	cout << "Phan so lon nhat: " << max.ts << "/" << max.ms << endl;
	PS min = minPS(n, arr);
	cout << "Phan so nho nhat: " << min.ts << "/" << min.ms << endl;
	sxMangTang(n, arr);
	outputArr(n, arr);
	sxMangGiam(n, arr);
	outputArr(n, arr);
}
