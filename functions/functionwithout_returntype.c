#include<stdio.h>
void sum(int a ,int b);//----------------> function declearation
void main()
{
  int a=2,b=3;
  sum(a,b);//step1  ------------->function call
  
}
void sum( int a ,int b)//step2 ---------------->function defination
{
  printf(" sum is : %d",a+b); //step 3
}

