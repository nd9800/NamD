#include <stdio.h>
int main()
{
	int a[4][3];
	int temp;
	for ( int i = 0 ; i < 4; i++)
	{
		for (int j = 0 ; j < 3; j++)
		{
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	
	for (int i = 0 ; i < 4 ; i++)
	{
		for (int j = 0 ; j <3 ; j++)
		{
			printf("%5d", a[i][j]);
		} printf("\n");
	}
 for (int i = 1; i < 3; i++) {
      for (int j = 0; j < 4; j++) {
         temp = a[i][j];
         a[i][j] = a[j][i];
         a[j][i] = temp;
      }
   }

   printf("\nMa tran chuyen vi cua ma tran da cho la:\n");
   for (int i = 0; i < 3; i++) {
      printf("\n");
      for ( int j = 0; j < 4; j++) {
         printf("%d\t", a[i][j]);
      }
   }

}
