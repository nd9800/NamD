#include <stdio.h>

int main()
{
	int n;
	printf("Nhap mot so tu nhien ");
	scanf("%d",&n);
	if(n<0)
	{
		printf("%d khong phai la so tu nhien", n);
	}else
	{	int a;
		for (a=0;a<n;a++)
		{
		
		if((a%3)==0)
		{
		printf("Cac so nho hon %d chia het cho 3 la %d\n",n,a);}
	}
}
}
