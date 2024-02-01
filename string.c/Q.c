//WAp t0 chage the first letter of every word 
#include<stdio.h>
#include<string.h>
int main()
{
	char name[50];
	int l;
	printf("ENTER YOUR NAME: ");
	gets(name);
  l=strlen(name);
  // printf("%d",l);
 int i=0;
 while (i<l)
 {
      if (i == 0 || name[i-1] == ' ') 
        {
        name[i] = toupper(name[i]);
        } 
        else
         {
          name[i] = tolower(name[i]);
        }
        i++;
 }
 printf("%d",name);
	
}





