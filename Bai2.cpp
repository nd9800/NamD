#include <stdio.h>
int main()
{
	float a=4000;
	float lai= (float)8/100;
	float a1;
	a1=(float)a*(1+lai);
	printf("Sau 1 nam tong so tien nhan duoc la %f $\n",a1);
	float a2;
	a2=(float)a1*(1+lai);
	printf("Sau 2 nam tong so tien nhan duoc la %f $\n",a2);
	float a3;
	a3=(float)a2*(1+lai);		
	printf("Sau 4 nam tong so tien nhan duoc la %f $\n",a3);
	float a4;
	a4=(float)a3*(1+lai);	
	printf("Sau 4 nam tong so tien nhan duoc la %f $\n",a4);
}
