#include<stdio.h>  


int main()  
{  
 int n1=0,n2=1,n3,i,n;  
  
 printf("Nhap so n bat ky ");  
 scanf("%d",&n);  
   
 for(i=2;i<n;++i)
 {  
  n3=n1+n2;  
  
  n1=n2;  
  n2=n3;  
 }  printf(" Chu so thu %d la %d",n,n3);
 

}  
