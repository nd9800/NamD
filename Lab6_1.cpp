#include <stdio.h>
int main()
{
	int n;

	printf("Nhap mot so n ");
	scanf("%d", &n);
	int a[n];
	int tbc;
	int s = 0;
	int count = 0;
	
	for (int i = 0; i < n; i++)
	{	printf("Nhap gia tri thu %d ", i);
	scanf("%d",&a[i]);
		if(a[i]%2 != 0)
		{	
			s = s + a[i];
			count++;
		}
	} printf("Trung binh cong cua  so le trong mang la  %f",(float) s/count);
}
