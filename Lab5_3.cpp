#include <stdio.h>
int main()
{
	int a;
	int s = 0;
	for ( a=1 ; a < 200 ; a++ )
	{
		if( a % 2 == 1)
		{
			s = s + a ;
		}
	} printf (" Tong cua 100 so le dau tien la %d",s);
}
