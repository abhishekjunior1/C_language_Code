#include<stdio.h>
 int main()
{
	int n=10;
  A:
  printf("%d",n);
  n = n-1;
  if (n>1)
  goto A;
  
}