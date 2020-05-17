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
	for (int i = 0; i < n; i++)
	{
		if(a[i]%2!=0)
		{
			h = a[i];
		}
	} printf(" so le cuoi cung cua mang la %d", h);
}
