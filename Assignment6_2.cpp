#include <stdio.h>
int main()
{
	int n;
	int h;
	printf("Nhap so nguyen n ");
	scanf("%d", &n);
	int a[n];
	
	for (int i = 0; i < n; i++)
	{
		printf("Nhap gia tri thu %d ", i);
		scanf("%d", &a[i]);
	}
	int min = 0;
	 for (int i=0; i < n; i++)
	 {
	 	if(a[i]>0&& a[i]> min)
	 	{
	 		a[i]=h;
		 }
	 } printf("So duong nho nhat la %d", h);
}
