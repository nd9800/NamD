#include <stdio.h>
int main ()
{	// ma tran so 1
	int i;
	int j;
	int a[4][3];
	for (int i = 0 ; i < 4; i++)
	{
		for (int j = 0 ; j < 3; j++)
		{
			printf("a[%d][%d]", i , j);
			scanf("%d", &a[i][j]);
		}
	}

	//ma tran so 2
	int b[4][3];
 	// cot -> hang Mang 2 chieu
 	for(int i = 0 ; i < 4; i++)
 	{
 		for(int j = 0 ; j< 3; j++)
 		{
 			printf("b[%d][%d] =", i, j);
 			scanf("%d", &b[i][j]);
		 }
	 }
 		
// tong cua 2 ma tran
		 
	int c[4][3];
	for(int i = 0; i < 4; i++)
	{
		for (int j = 0 ; j < 4; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
		 
	printf("Tong hai ma tran tren la:\n ");
	for(int i = 0; i < 4; i++)
	{
		for (int j = 0 ; j < 4; j++)
		{
		printf("%5d", c[i][j]);
		}
	
	printf("\n");
}
//hieu qua 2 ma tran
		 
	int d[4][3];
	for(int i = 0; i < 4; i++)
	{
		for (int j = 0 ; j < 4; j++)
		{
			d[i][j] = a[i][j] - b[i][j];
		}
	}
		 
	printf("Hieu hai ma tran tren la:\n ");
	for(int i = 0; i < 4; i++)
	{
		for (int j = 0 ; j < 4; j++)
		{
		printf("%5d", d[i][j]);
		}
		printf("\n");
}
}
