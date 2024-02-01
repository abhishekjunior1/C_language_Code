#include<stdio.h>
#include<string.h>
int main()
{
FILE *ptr =fopen("cw.txt","w");//creating a file and opening
char str[100]="abhishek kumar work hard";
fputs(str,ptr);
fclose(ptr);



}