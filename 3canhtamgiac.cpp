#include <math.h>
#include <stdio.h>
int main()
{	printf("Nhap so do 3 canh tam giac: ");
	int a;
	scanf("%d", &a);
	int b;
	scanf("%d", &b);
	int c;
	scanf("%d", &c);
	float s;
	float p; //chu vi
	float p1; //nua chu vi
	
			if (a+b>c)
			{
				if(b+c>a)
				{
					if(a+c>b)
					{
					printf("Day la so do 3 canh cua tam giac");
					p= a + b + c;
					p1=(a+b+c)/2;
					s= sqrt( p1*(p1-a)*(p1-b)*(p1-c) );
					printf("Dien tich cua tam giac do la s=%f va chu vi cua tam giac do la p=%f", s, p);
				}else
				{
					printf("day khong phai la so do 3 canh cua tam giac");
				}
				}else
				{
					printf("day khong phai la so do 3 canh cua tam giac");
				}
				
			}else
			printf("day khong phai la so do 3 canh cua tam giac");
}

