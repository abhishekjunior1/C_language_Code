#include<stdio.h>
int main()
{
  char name[10];    
  // gets(name);                                //similar to string 
  printf("plz enter your  full name: ");
  scanf("%[^\n]c",&name);                          //[^\n]-----print  the space -----read character by character 
  printf("your name  is %s",name);                 //------------printing complete string  with space
return 0;
}
