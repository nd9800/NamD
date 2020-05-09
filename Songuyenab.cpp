#include <stdio.h>
int main()
{
	int a;
	int b;
	printf("nhap so nguyen dau tien ");
	scanf("%d", &a);
	printf("nhap so nguyen thu hai ");
	scanf("%d", &b);
	if(a>=b)
	{
		if(b!=0)
		{
			float c ;
				c = (float) a / b;
			printf("ta co thuong cua %d va %d la %f",a, b, c);
		}else
		{
			printf("khong co ket qua");
		}
	}else
	{
		int d = a * b;
		printf("ta co tich cua %d va %d la %d", a, b, d);
		
	}
}
