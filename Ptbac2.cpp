#include <stdio.h>
#include <math.h> // can bac 2
int main()
{
	float a;
	float b;
	float c;
	float x;
	float x1;
	float x2;
	float delta;
		
	printf("nhap so a: ");
	scanf("%f", &a);
	printf("nhap so b: ");
	scanf("%f", &b);
	printf("nhap so c: ");
	scanf("%f", &c);
	
	if(a==0)
	{
		if(b==0)
		{
			printf("phuong trinh vo nghiem");
		}else
		{
			x=(-b)/c;
			printf("phuong trinh co mot nghiem la x=%f",x);
					}
	}else
	{
	
	
	delta=b*b-4*a*c;

	
		if(delta>0)
		{
				x1 =  ((-b + sqrt(delta)) / (2*a));
				x2 =  ((-b - sqrt(delta)) / (2*a));
			printf("phuong trinh co nghiem x1=%f, x2=%f",x1,x2);
			
		}
		else
		{
			if(delta==0)
			{
				x1=(-b / (2 * a));
				printf("phuong trinh co nghiem kep la x1=x2=%f",x1);
			}
	 
			else
		{
			printf("phuong trinh vo nghiem");
		}
	}
}
}

	

