#include<stdio.h>
int main()
{
  
  int *a, b=5;
  a=&b;//puting the adreess of a
  printf("%d \n",&a);//adress of a 
  printf("%d \n",&b);//adress of b
  printf("%d \n",*a);//printing the value of b by pointer variable 
  printf("%d",a);//adress of b held by a 

}