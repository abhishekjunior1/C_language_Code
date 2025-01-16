#include<stdio.h>
void sum();
void sub();
int main()
{
  sum();//calling sum function
  sub();
}
void sum()
{
  int a=2,b=3;
  printf("sum is %d",a+b);
}
void sub()
{
  int a=2,b=3;
  printf("\nsum is %d",a-b);
}