 #include <stdio.h>
 #include <string.h>
 
 int kiemtra(char str1[], char str2[])
 {
 	for(int i = 0; i < 100;i++)
 	{	int j;
 		for ( int j=0; j < 100; j++)
 		{
 			if (str2[i+j] != str1[j])
 			break;
 			if(j == 100)
 			return i;
		 }
		 
	 }
	 return -1;
 }
  
 int main()
 {
 	char str1[200], str2[100];
	printf("Nhap chuoi 1 : \n");
	scanf("%s",str1);
	printf("Nhap chuoi 2 : \n");
	scanf("%s",str2);
	int cnt = kiemtra(str1,str2);
	if(cnt ==-1)	printf("Chuoi 2 khong co trong chuoi 1");
	else			printf("Chuoi 2 nam trong chuoi 1");
	return 0;
 }
