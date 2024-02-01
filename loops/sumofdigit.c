#include<stdio.h>
int main()
{
int sum=0;
int num=123456;
int r;
while(num>0)
{
  r=num%10;
  printf("\n reminder is is %d", r);
  sum=sum+r;
  num=num/10;
  printf("\n new number  is %d", num);
} 
printf("\n sum is %d", sum);
}
