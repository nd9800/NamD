 #include <stdio.h>
 int main()
 {
 	int a;
 	int b;
 	int c;
 	printf("Nhap so dau tien\n ");
 	scanf("%d",&a);
 	printf("Nhap so thu hai\n ");
 	scanf("%d",&b);
 	printf("Nhap so thu ba\n ");
 	scanf("%d",&c);
 	while (a+b<=c||a+c<=b||b+c<=a||a<0||b<0||c<0)
 	{
 		printf("Nhap sai nhap lai so dau tien\n ");
 	scanf("%d",&a);
 	printf("Nhap sai nhap lai so thu hai\n ");
 	scanf("%d",&b);
 	printf("Nhap sai nhap lai so thu ba\n ");
 	scanf("%d",&c);
	 }printf(" Ba so tren la so do 3 canh cua tam giac ");
 }
