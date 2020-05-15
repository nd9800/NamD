#include <stdio.h>
int main()
{
	int n;
	printf("Nhap so ");
	scanf("%d",&n);
	if(n<0)
	{
		printf("Khong thoa man dau bai ");
	}	
	else
	{
		int b;
		int sum = 0;
		for(b=0; n>0; n/=10)
		{
			b=n%10;
			
			sum=sum+b;
		}printf("Tong cac chu so  la %d", sum);
	}
	
}
