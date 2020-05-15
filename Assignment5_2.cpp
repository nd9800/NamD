#include <stdio.h>
int main()
{
	int n;
	printf("Nhap so nguyen duong n ");
	scanf("%d", &n);
	if(n<0)
	{
		printf("%d khong phai la so nguyen duong");
	}else
	{	int count=0;
		int b;
		for(b=0; n>0; n/=10)
		{	b=b*10+n%10;
			count++;
		}printf(" So chu so cua n la %d", count);
}
	}

