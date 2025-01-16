#include<stdio.h>
int main()
{
int count=0;
int num=123456;
while(num>0)
{
  num=num/10;
  count++ ;
  printf(" \n value of num  :  %d", num);
}
printf(" \n count number is  :  %d", count );
} 