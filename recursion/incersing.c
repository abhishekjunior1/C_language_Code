#include<stdio.h>
void inc( int x, int n)
{
  if(x == n) 
  {
    int sum;
sum =n+x;
printf("%d",sum);
  }
  return ;
  
  printf("%d \n",x);
  inc( x+1 ,n);
  
  return;

}

int main ()
{
  int n;
  printf( "enter the valur of n :");
  scanf("%d",&n);
  inc(1,n) ;
  // printf("%d",fact);
  }