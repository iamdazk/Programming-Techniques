#include<iostream>
#include<fstream>
#include<math.h>

#define SIZE 100
using namespace std;

struct toado
{
	float x;
	float y;
}a[SIZE];


void nhap(int& n, toado a[SIZE]){

	do
	{
		cout << "So luong diem: ";
		cin >> n;
		if (n<1 || n>SIZE)
			cout << "So diem khong hop le, moi nhap lai";
	} while (n<1 || n>SIZE);

	for (int i = 0; i < n; i++)
	{
		cin >> a[i].x >> a[i].y;
	}
}

int kiemtrakhongtrung(int n, toado a[SIZE], int vtri){
	int flag = 1;
	for (int i = 0; i < n; i++)
	{
		if (vtri != i && a[i].x == a[vtri].x && a[i].y == a[vtri].y)
			flag = 0;
	}
	return flag;
}

int sdKhongTrung(int n, toado a[SIZE]){
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (kiemtrakhongtrung(n, a, i))
		{
			count++;
		}
	}
	return count;
}

void xuatdiem(toado a){
	cout << "(" << a.x << "," << a.y << ")";
}

void xuat(int n, toado a[SIZE]){
	for (int i = 0; i < n; i++)
	{
		xuatdiem(a[i]);
		cout << "\t";
	}
	cout << "\n";
}
int countHDD(int n, toado a[SIZE]){
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i].x > 0)
		{
			dem++;
		}
	}
	return dem;
}

double kcDenO(toado a){
	return sqrt((a.x) * (a.x) + (a.y) * (a.y));
}


void nearandfarO(int n, toado a[SIZE]){

	double max = kcDenO(a[0]);
	double min = kcDenO(a[0]);

	for (int i = 0; i < n; i++)
	{
		if (max < kcDenO(a[i]))
		{
			max = kcDenO(a[i]);
		}
		else if (min > kcDenO(a[i]))
		{
			min = kcDenO(a[i]);
		}
	}

	if (max == min)
	{
		cout << "Tat ca cac diem deu cach deu goc toa do.\n";
	}

	else
	{
		cout << "Cac diem gan goc toa do nhat la:\n";
		for (int i = 0; i < n; i++)
		{
			if (min == kcDenO(a[i]))
			{
				cout << "(" << a[i].x << "," << a[i].y << ")" << endl;
			}
		}
	}
}

void diemCoHoanhDoMinMax(int n, toado a[SIZE]){

	int min = a[0].x;
	int max = a[0].x;
	for (int i = 0; i < n; i++)
	{
		if (a[i].x > max)
		{
			max = a[i].x;
		}
		if (a[i].x < min)
		{
			min = a[i].x;
		}
	}

	if (min == max)
	{
		cout << "Tat ca cac diem co hoanh do bang nhau.\n";
	}
	else
	{
		cout << "Cac diem co hoanh do min:\n";
		for (int i = 0; i < n; i++)
		{
			if (a[i].x == min)
			{
				xuatdiem(a[i]);
				cout << "\t";
			}
		}
		cout << "\nCac diem co hoanh do max:\n";
		for (int i = 0; i < n; i++)
		{
			if (a[i].x == max)
			{
				xuatdiem(a[i]);
				cout << "\t";
			}
		}
		cout << "\n";
	}
}

int main(int argc, char** argv){
	toado arr[SIZE];
	int n;
	nhap(n, arr);
	cout << "Toa do cac diem ban vua nhap:\n";
	xuat(n, arr);
	cout << "Co " << countHDD(n, arr) << " diem co hoanh do duong.\n";
	cout << "Co " << sdKhongTrung(n, arr) << " diem co toa do khong trung cac diem khac.\n";
	diemCoHoanhDoMinMax(n, arr);
	nearandfarO(n, arr);
}