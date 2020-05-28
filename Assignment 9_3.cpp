#include <stdio.h>
#include <string.h>

int main()
{
	int n ;
	printf("Nhap mot so nguyen duong n bat ky ");
	scanf("%d", &n);
	char s[n][100];
	for ( int i = 0; i< n; i++)
	{
		
		printf("Nhap chuoi thu %d ", i);
		scanf("%s",s[i]);
	}
	for (int i =0; i < n; i++)
	{
		for (int j = 0; j < 100;j++)
		{	
				if(s[i][j] > s[i][j+1])
			{
				int temp=s[i][j];
				s[i][j]=s[i][j+1];
				s[i][j+1]= temp;
			}
		}
	}
		for ( int i = 0; i< n; i++)
	{
		printf("%10s  ", s[i]);
	}
}
