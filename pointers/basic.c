#include<stdio.h>
int main()
{
  int *a, b=5;
  a=&b;
  printf("%d \n",*a);
  printf("%d",a);
}