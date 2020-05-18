
#include <stdio.h>
int main()
{
	int n;
	int b;
	printf("Nhap so nguyen n ");
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n ; i++)
	{
		printf("Nhap so thu %d ", i );
		scanf("%d", &a[i]);
	}

	for (int i = 0 ; i < n; i++)
	{
		if(a[i]>0)
		{
			b = a[i];
			break;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] <= b && a[i]>0)
		{
			b = a[i];
		}
	}
	printf("So nho nhat la %d", b);
	
	}
