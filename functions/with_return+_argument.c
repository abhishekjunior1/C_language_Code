#include<stdio.h>
int sum(int a ,int b);//----------------> function declearation
int main()
{
  int a=2,b=3,c;
  c=sum(a,b);//step1  ------------->function call
  printf("sum is %d",c);//step 4
}
int sum( int a ,int b)//step2 ---------------->function defination
{
  return a+b; //step 3
}

