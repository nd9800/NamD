#include<stdio.h>  


int main()  
{
	int n ;
	int n1=0,n2=1, a;
	printf(" Nhap so n ");
	scanf("%d",&n);
	

	while (n1+n2<n)
	{
		a = n1 + n2;
		n2=n1;
		n1=a;

	}
	printf("So gan %d nhat trong day fibonacci la so %d",n , a);
}
