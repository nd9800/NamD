#include <stdio.h>

int main()
{
	int n;
	printf("Nhap mot so n bat ky ");
	scanf("%d",&n);
	int a[n];
	
	for (int i = 0 ; i < n ; i++)
	{
		printf("Nhap so thu %d ", i );
		scanf("%d", &a[i]);
	for (int j = 0; j < i; j++)
		{
			while (a[j]==a[i])
			{
					printf("Nhap sai nhap lai so thu %d ", i );
		scanf("%d", &a[i]);
			}
		
		}
	}
}
