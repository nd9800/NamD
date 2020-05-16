#include <stdio.h>
int main()
{
	int a;
	int b;
	printf("Nhap so dau tien ");
	scanf("%d",&a);
	printf("Nhap so thu hai ");
	scanf("%d",&b);
	int i = 1;
	int h;
	for (;i<=a||i<=b;i++)
	{
	
	if(a%i==0 && b%i==0)
	{
		h = i ;
	}
}
	printf("Uoc chung lon nhat cua hai so la %d",h);
}

