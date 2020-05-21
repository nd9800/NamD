#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,temp ;
	int *p;
	printf("Nhap so nguyen n ");
	scanf("%d", &n);
	
 	p = (int *)malloc(n*sizeof(int));
 	for (int i = 0; i < n; i++)
 	{
 		printf("\nNhap phan tu thu %d \n", i );
 		scanf("%d", (p+i));
	 }
	 for (int i = 0; i < (n-1); i++)
	 {
	 	for ( int j = 0 ; j < n-i-1; j++)
	 	{
	 	
	 			  if((*(p+j))>(*(p+j+1)))
            {
                temp = *(p+j);
                *(p + j) = *(p+j+1);
                *(p + j + 1) = temp;
			 }
		 }
	 }
	 
	 
	 for (int i = 0; i < n; i++)
	 {
	 	printf("%3d",*(p+i));
	 }
	 //nhap them n phan tu
	 p  = (int*)realloc(p,n*sizeof(int));
	 for (int i = n; i < 2*n; i++)
 	{
 		printf("\nNhap phan tu thu %d \n", i );
 		scanf("%d", (p+i));
	 }
	 for (int i = 0; i < (2*n-1); i++)
	 {
	 	for ( int j = 0 ; j < 2*n-i-1; j++)
	 	{
	 	
	 			  if((*(p+j))>(*(p+j+1)))
            {
                temp = *(p+j);
                *(p + j) = *(p+j+1);
                *(p + j + 1) = temp;
			 }
		 }
	 }
	 
	 
	 for (int i = 0; i < 2*n; i++)
	 {
	 	printf("%3d",*(p+i));
	 }
}
