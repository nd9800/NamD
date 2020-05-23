
 #include <stdio.h>
 #include <stdlib.h>
 	int main ()
 	{	int n, temp;
 		printf("Nhap so nguyen n ");
 		scanf("%d", &n);
 		int *p;
 		  p = (int *)malloc(n*sizeof(int));

 		  
 		  for (int i =0; i< n; i++)
 		  {
 		  	printf("Nhap phan tu thu %d: \n",i);
 		  	scanf("%d",(p+i));
		   }

int j, count, max;
count = 0;
max = 0;
for (j = 0; j <= n - 1; j++) {

	if (*(p+j)> 0 ){

	count++;
	if(count>max) 
{
		max = count;
	}
}
else count = 0;
}
printf("So luong cac so duong lien tiep nhieu nhat la %d ", max);
}

