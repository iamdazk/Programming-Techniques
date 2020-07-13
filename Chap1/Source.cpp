#include<iostream>
#define SIZE 50

using namespace std;

/* YÊU CẦU
1. Tính tổng các phân số
2. Phân số lớn nhất 
3. Phân số nhỏ nhất
4. Sắp xếp mảng tăng dần
*/

typedef struct PS {
	int ts;
	int ms;
};

int ucln(int a, int b) {
	if (b == 0) return a;
	return ucln(b, a % b);
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

void inputPS(PS &n){
	cin >> n.ts;
	do {
		cout << n.ts << "/";
		cin >> n.ms;
	} while (n.ms == 0);
	rutGon(n);
}

void inputArr(int& n, PS arr[]){
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan so thu " << i << ":" << endl;
		inputPS(arr[i]);
	}
}


PS tinhTong(PS n1, PS n2) {
	PS result;
	result.ts = n1.ts * n2.ms + n1.ms * n2.ts;
	result.ms = n1.ms * n2.ms;
	rutGon(result);
	return result;
}

PS tinhTongPS(int n, PS arr[]) {
	PS temp = arr[0];
	for (int i = 1; i < n; i++)
	{
		temp = tinhTong(temp, arr[i]);
	}
	rutGon(temp);
	return temp;
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

void arrangeArray(int n, PS arr[]) {
	PS temp;
	for(int i=0;i<(n-1);i++)
		for (int j = i + 1; j < n; j++)
		{
			if (giaTriThuc(arr[i]) > giaTriThuc(arr[j]))
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
}

void outputArr(int n, PS arr[])
{
	cout << "Sap xep mang tang dan: ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i].ts << "/" << arr[i].ms << " ";
	}
	cout << endl;
}

int main()
{
	int n;
	PS arr[SIZE];
	inputArr(n, arr);
	PS result = tinhTongPS(n, arr);
	cout << "Tong cac phan so: " << result.ts << "/" << result.ms << endl;
	PS max = maxPS(n, arr);
	cout << "Phan so lon nhat: " << max.ts << "/" << max.ms<< endl;
	PS min = minPS(n, arr);
	cout << "Phan so nho nhat: " << min.ts << "/" << min.ms << endl;
	arrangeArray(n, arr);
	outputArr(n, arr);
}
