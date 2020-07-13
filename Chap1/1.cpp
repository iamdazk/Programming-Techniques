#include<iostream>
#include<cmath>

using namespace std;

typedef struct PS{
	int ts;
	int ms;
};

void inputPS(PS& n){
	cout << "Nhap tu so: ";
	cin >> n.ts;
	do {
		cout << "Nhap mau so: ";
		cin >> n.ms;
	} while (n.ms == 0); // TH nhập mẫu số bằng 0 thì nhập lại mẫu số
	if (n.ms < 0)
	{
		n.ms *= -1;
		n.ts *= -1;
	}
}

int ucln(int a, int b) {
	//tim uoc chung lon nhat
	if (b == 0) return a;
	return ucln(b, a % b);
}

void rutGon(PS& n1) {
	int temp = ucln(n1.ts, n1.ms);
	n1.ts /= temp;
	n1.ms /= temp;
	if (n1.ms < 0)
	{
		n1.ms *= -1;
		n1.ts *= -1;
	}
}

PS tinhTong(PS n1, PS n2){
	PS result;
	//Quy dong mau so
	result.ms = n1.ms * n2.ms;
	//Quy dong tu so
	n1.ts *= n2.ms;
	n2.ts *= n1.ms;
	//Tinh tong
	result.ts = n1.ts + n2.ts;
	rutGon(result);
	return result;
}

PS tinhHieu(PS n1, PS n2){
	PS result;
	//Quy dong mau so
	result.ms = n1.ms * n2.ms;
	//Quy dong tu so
	n1.ts *= n2.ms;
	n2.ts *= n1.ms;
	//Tinh hieu
	result.ts = n1.ts - n2.ts;
	rutGon(result);
	return result;
}

PS tinhTich(PS n1, PS n2) {
	PS result;
	result.ts = n1.ts * n2.ts;
	result.ms = n1.ms * n2.ms;
	rutGon(result);
	return result;
}

PS tinhThuong(PS n1, PS n2){
	PS result;
	result.ts = n1.ts * n2.ms;
	result.ms = n1.ms * n2.ts;
	rutGon(result);
	return result;
}

void ktToiGian(PS n) {
	if (ucln(n.ts, n.ms) == 1 || ucln(n.ts, n.ms) == -1)
		cout << n.ts << "/" << n.ms << " la phan so toi gian";
	else cout << n.ts << "/" << n.ms << " khong la phan so toi gian";
	cout << endl;
}

int bcnn(int a, int b) {
	int c = ucln(a, b);
	return (a*b) / c;
}

void quyDong(PS n1, PS n2) {
	int a = bcnn(n1.ms, n2.ms);
	n1.ts = n1.ts * (a / n1.ms);
	n2.ts = n2.ts * (a / n2.ms);
	n1.ms = a;
	n2.ms = a;
	cout << "Phan so thu nhat sau khi da quy dong: " << n1.ts << "/" << n1.ms << endl;
	cout << "Phan so thu hai sau khi da quy dong: " << n2.ts << "/" << n2.ms << endl;
}

void ktAmDuong(PS n) {
	if (n.ts >0 && n.ms > 0)
		cout << n.ts << "/" << n.ms << " la phan so duong";
	else cout << n.ts << "/" << n.ms << " la phan so am";
}

void outputPS(PS n)
{
	cout << n.ts << "/" << n.ms << endl;
}

PS lonHon(PS n1, PS n2) {
	return ((float)n1.ts / n1.ms >= (float)n2.ms / n2.ms) ? n1 : n2;
}

int main(){
	PS n1, n2;
	cout << "Phan so thu nhat: " << endl;
	inputPS(n1);
	cout << endl;
	cout << "Phan so thu hai: " << endl;
	inputPS(n2);
	cout << "Xuat 2 phan so: ";
	cout << n1.ts << "/" << n1.ms << " " << n2.ts << "/" << n2.ms << endl;
	cout << "Tong = ";
	outputPS(tinhTong(n1, n2));
	cout << "Hieu = ";
	outputPS(tinhHieu(n1, n2));
	cout << "Tich = ";
	outputPS(tinhTich(n1, n2));
	cout << "Thuong = ";
	outputPS(tinhThuong(n1, n2));
	quyDong(n1, n2); 
	cout << "Kiem tra toi gian: " << endl;
	ktToiGian(n1);
	ktToiGian(n2);
	cout << "Kiem tra am duong: " << endl;
	ktAmDuong(n1);
	cout << endl;
	ktAmDuong(n2);
	cout << endl;
	cout << "Phan so lon hon = ";
	outputPS(lonHon(n1, n2));
}


