#include<stdio.h>
int add(int x,int y) 
{
  int z= x+y;
  return z;
}
int product(int x,int y) 
{
  int z= x*y;
  return z;
}
 void div(int x, int y)
{
  int z=y/x;
  printf("division is: %d \n",z);
}

int main()
{
  int a=5;
  int b=10;
  int y=add(a,b);
  int k=product(a,b);
  div(a,b);
  printf(" addition is %d \n",y);
  printf("product is :%d \n",k);
  return 0;

}