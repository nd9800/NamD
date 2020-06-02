 #include <stdio.h>
 #include <string.h>
 int percenta(char s1[])
 { int count = 0;
 	for (int i = 0; i < strlen(s1); i++)
 	{	
 		if( s1[i]=='a')
 		{
 			count++;
		 }
	 }
		printf("\nNumber of character a is %d\n", count);
	 printf("a:%f %%", (float)count/strlen(s1)*100);
 }
 int percente(char s1[])
 {	int count = 0;
 	for (int i = 0; i < strlen(s1); i++)
 	{
 		if( s1[i]=='e')
 		{
 			count++;
		 }
	 }
	 printf("\nNumber of character e is %d\n", count);
	 printf("e:%f %%", (float)count/strlen(s1)*100);
 }
 int percenti(char s1[])
 {	int count = 0;
 	for (int i = 0; i < strlen(s1); i++)
 	{
 		if( s1[i]=='i')
 		{
 			count++;
		 }
	 }
	 printf("\nNumber of character i is %d\n", count);
	 printf("i:%f %%", (float)count/strlen(s1)*100);
 }
 int percento(char s1[])
 {	int count = 0;
 	for (int i = 0; i < strlen(s1); i++)
 	{
 		if( s1[i]=='o')
 		{
 			count++;
		 }
	 }
	 printf("\nNumber of character o is %d\n", count);
	 printf("o:%f %%", (float)count/strlen(s1)*100);
 }
 int percentu(char s1[])
 {	int count = 0;
 	for (int i = 0; i < strlen(s1); i++)
 	{
 		if( s1[i]=='u')
 		{
 			count++;
		 }
	 }
	 printf("\nNumber of character u is %d\n", count);
	 printf("u:%f %%", (float)count/strlen(s1)*100);
 }
 
 int percentrest(char s1[])
 {	int count = 0;
 	for (int i = 0; i < strlen(s1); i++)
 	{
 		if( s1[i]!='u'&&s1[i]!='a'&&s1[i]!='e'&&s1[i]!='i'&&s1[i]!='o')
 		{
 			count++;
		 }
	 }
	 printf("\nNumber of the rest character  is %d\n", count);
	 printf("rest:%f %%", (float)count/strlen(s1)*100);
 }
 
 
 int main ()
 {	int counta =0;
 	char s1[100];
 	printf("Enter string ");
 	scanf("%s", s1);
 	percenta(s1);
 	percente(s1);
 	percenti(s1);
 	percento(s1);
 	percentu(s1);
 	percentrest(s1);
 	return 0;

 	
 }
