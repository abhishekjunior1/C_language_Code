#include<stdio.h>
#include<string.h>
 int main()
{
	char name[50];
	int l;
	printf("ENTER YOUR NAME: ");
	fflush(stdin);
	gets(name);
	strupr(name);
	printf("NOW STRING IS: %s",name);



	
}