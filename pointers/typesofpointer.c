#include<stdio.h>
int main()
{
  
  void *p; //wild pointer example 
  int x=3;
  p=&x;
  printf("%d",*(int*)p);
  float y=3.14;
  p=&y;
  printf("\n\n%f", *(float*)p);
}