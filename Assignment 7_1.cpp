#include <stdio.h>
int main()
{
	int a[4][4];
	for(int i = 0; i < 4; i++)
	{
			for(int j = 0; j < 4; j++)
			{
			printf("a[%d][%d] =", i, j);
 			scanf("%d", &a[i][j]);
			}
	}

	for(int i = 0; i < 4; i++)
	
	{
		for ( int j = 0; j < 4; j++)
		{
			printf("%5d", a[i][j] );

		}printf("\n");
	}
	//trung binh cong duong cheo chinh
	int s = 0;
	int count = 0;
	for (int i = 0; i <4; i++)
	{
		 s = s + a[i][i];
		count++;
	}
	printf("Trung binh cong cua duong cheo chinh la %f\n",(float)s/count);
	//trung binh cong duong cheo phu
	int s2=0;
	for(int i = 0; i < 4; i++)
{
	 s2 = s2 + a[i][3-i];
}
printf("Trung binh cong cua duong cheo phu la %f\n",(float)s2/count);
	
}
