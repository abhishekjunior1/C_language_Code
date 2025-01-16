#include<stdio.h>
int main()
{
int rev=0;
int num=123456;//output should be 654321 
int r;
while(num>0)
{
  r=num%10;//reminder aaya that is 6
  rev=rev*10+r;
num=num/10;
} 
printf("\n reversed numerris  is %d", rev);
}
