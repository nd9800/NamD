#include <stdio.h>

int main()
{
	int a;
	printf("nhap so nguyen bat ky: ");
	scanf("%d",&a);
	
	if((a>=2)&&(a<=7))
	{
		printf("Day la thu %d",a);
		
	}else if(a==8)
	{
		printf("Day la chu nhat");

	}else
	{
	printf (" Day khong phai la ngay trong tuan");
}
}
	
