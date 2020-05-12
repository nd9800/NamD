#include <stdio.h>
int main()
{
 int a;
 int n=0;
 printf("Nhap so nguyen bat ky: ", a);
 scanf("%d",&a);
 			if(a!=0)
 	{for(n=0;a>0;a/=10)
	 {
 	n=n*10+a%10;
 
	 }printf(" so dao nguoc la %d", n);

 	}else
 	{
	 printf("Khong co so dao nguoc");
}
 }
