#include <stdio.h>

int main()
{
	int a;
	printf("Nhap so a khong qua 4 chu so bat ky nguyen duong:  ");
	scanf("%d",&a);
	if (a>10&&a<10000)
			{
				if((a%10)==0)
				{
				printf("Khong co so nghich dao cua %d",a);
						}else if(a>10&&a<100)
				{
				int a1=a/10;
				int a2=a%10;
				int a3=a2*10+a1;
				printf("Ta co so nghich dao cua %d la %d",a, a3);
						}else if(a>100&&a<1000)
				{
				int a1=a/100;
				int a2=a%100;
				int a3=a2/10;
				int a4=a2%10;
				int a5=a4*100+a3*10+a1;
				printf("Ta co so nghich dao cua %d la %d",a,a5);
						}else if(a>1000&&a<10000)
				{
				int a1=a/1000;
				int a2=a%1000;
				int a3=a2/100;
				int a4=a2%100;
				int a5=a4/10;
				int a6=a4%10;
				int a7=a6*1000+a5*100+a3*10+a1;
				printf("Ta co so nghich dao cua  %d la %d",a, a7);
			}else
			{
				printf("Khong co so nghich dao cua %d",a);
		    }
			
			}else
		{
			printf("Khong co so nghich dao cua %d",a);
		}

}
