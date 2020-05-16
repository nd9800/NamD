#include <stdio.h>
int main()
{
	int n;
	int x;
	printf("Nhap mot so n ");
scanf("%d", &n);
	int a[n];

	for (int i = 0; i < n; i++)
	{	printf("Nhap gia tri thu %d ", i);
		scanf("%d",&a[i]);
	}
	
		
	printf("Nhap so x bat ky");
	scanf("%d", &x);
	int i = 0;
	 for (i = 0; i<n; i++)
	 {
	 	if(a[i]==x)
	 	{
	 		break;
		 }
	 
	 }
	 if (i>=n)
	 {
	 	printf("khong ton tai %d trong mang", x);
	 	
	 }
	 else
	 {
	 	printf("%d nam trong mang",x);
	 }
}
