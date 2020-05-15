#include <stdio.h>
int main()
{
	int a;
	int b;
	do
	{
		printf("Nhap vao hai so a va b ");
		scanf("%d",&a);
		scanf("%d",&b);
	}while (a>b);
	
	int s;
	int i = a;
	for (;i <= b;i++)
	{	
		s=s+i;
	} printf(" Tong cac so tu a den b la %d", s);
}
