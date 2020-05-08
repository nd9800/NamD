#include <stdio.h>

int main()
{
		int a;
		int b;
		int c;
		printf("Nhap vao so can kiem tra\n");
		scanf("%d",&a);
		scanf("%d",&b);
		scanf("%d",&c);
			if(a>b)
			{
				if(a>c)
				{
					printf("%d la so lon nhat", a);
				}else
				{
					printf("%d la so lon nhat", c);
				}
			}else
			{
				if(b>c)
				{
					printf("%d la so lon nhat", b);
				}else
				{
					printf("%d la so lon nhat", c);
				}
			}
		
}
