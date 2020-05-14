 #include <stdio.h>
 int main()
 {
 	double s ;
 	int n;
 	printf(" Nhap 1 so n bat ky ");
 	scanf("%d", &n);
 	for (int a=1; a <= n ; a++)
 	{
 	double d = (double) 1/a;
 		s = ( double) s + d;
	 } printf(" Ket qua cua 1+1/2+1/3+....+1/%d la %lf", n , s);
 }
