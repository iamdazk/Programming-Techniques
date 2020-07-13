#include<stdio.h>
#include<math.h>

void nghiemPTbac2(int a, int b, int c);

int main() {
	int a, b, c;
	scanf_s("%d%d%d", &a, &b, &c);
	nghiemPTbac2(a, b, c);
}

void nghiemPTbac2(int a, int b, int c) {
	float d;
	if (a == 0)
	{
		if (b == 0)
		{
			if (c == 0)
			{
				printf("PT vo so nghiem");
			}
			else
				printf("PT vo nghiem");
		}
		else
			printf("PT co nghiem duy nhat la :%.4f", -c / b);
	}
	else
	{
		d = (b * b - 4 * a * c);
		if (d > 0)
			printf("PT co 2 nghiem phan biet la : %.4f,%.4f", (-b + sqrt(d)) / (2 * a), (-b - sqrt(d)) / (2 * a));
		else if (d == 0) 
		    printf("PT co 1 nghiem kep la : %.4f", -b / (2 * a));
		else if (d < 0) 
		    printf("PT vo nghiem");
	}
}
