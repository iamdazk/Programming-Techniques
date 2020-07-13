#include <iostream>

using namespace std;

void nhap(int &k,int &n);
int TinhToHop(int k,int n);

void main()
{
	int n,k;
	nhap(k,n);
	int kq=TinhToHop(k,n);
	printf("%d",kq);
}
void nhap(int &k,int &n)
{
	scanf("%d %d",&k,&n);
}
int TinhToHop(int k,int n)
{
	if(k==1)
		return n;
	if(k==n)
		return 1;
	long t=TinhToHop(k,n-1),d=TinhToHop(k-1,n-1);
	return t+d;
}