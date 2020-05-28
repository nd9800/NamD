#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	printf("Nhap mot so nguyen n ");
	scanf("%d", &n);
	char str1[n], str2[20];
	printf("Nhap chuoi 1 : \n");
	for (int i = 0; i < n; i++)
	{
	scanf("%s",str1);
	}
	printf("Nhap chuoi 2 : \n");
	scanf("%s",str2);
	int count = 0;
for ( int i = 0 ; i < n; i++)
	{

			if(strcmp(str1, str2) ==0 )

		{
			count++;
		}
	
	}
	if(count >= 0)
	{
		printf("Chuoi 2 co trong chuoi 1");
	}
	else
	{
		printf("Chuoi 2 khong co trong chuoi 1");
	}
}
