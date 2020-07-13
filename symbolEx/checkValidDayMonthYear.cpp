
#include <iostream>

using namespace std;

int arr[13] = { 31,31,28,31,30,31,30,31,31,30,31,30,31 };
int d, m, y;


int check(int d, int m, int y, int A[]);
void show(int d, int m, int y, int A[]);

int main(){
	cin >> d >> m >> y;

	check(d, m, y, arr);

	show(d, m, y, arr);

	return 0;
}

int check(int d, int m, int y, int arr[]){
	if (m > 12 || m < 0 || y < 0)
		return 0;
	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
		arr[2] = arr[2] + 1;
	if (d<0 || d> arr[m])
		return 0;
	else
		return 1;
}

void show(int d, int m, int y, int arr[]) {
	if (check(d, m, y, arr) == 0)
		printf("khong phai la ngay thang nam");
	else
	{
		if (d == arr[m] && m != 12)
		{
			d = 1;
			m++;
		}
		else if (d == arr[m] && m == 12)
		{
			d = 1;
			m = 1;
			y++;
		}
		else if (d == 29 && m == 2)
		{
			d = 1;
			m++;
		}
		else
			d++;
		cout << d << " " << m << " " << y;
	}
}