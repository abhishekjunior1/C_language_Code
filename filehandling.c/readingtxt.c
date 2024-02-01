#include<stdio.h>
int main()
{
FILE *ptr=fopen("abhi.txt","r");
char str[100];
while(fgets(str,200,ptr)!=NULL)
printf("%s",str);


}