#include <stdio.h>
#include <math.h>
int main ()
{
	int n;
	printf(" Nhap so can kiem tra ");
	scanf("%d", &n);
	if(n<2)
	{
		printf(" %d khong phai la so nguyen to", n);
	}
	
		int a = 0;
		for (int i =2; i<=sqrt(n); i++)
		{
			if(n%i==0)
			{
				a++;
			}
		}
	if (a==0)
	{
		printf("%d la so nguyen to", n);
	}else
	{
		printf("%d khong la so nguyen to",n);
	}
}
