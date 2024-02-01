#include<stdio.h>
int main()
{
int a[5]={1,2,3,4,5};
int b[5];
int i;
for( i=0;i<5;i++)
{
if(i%2==0)  a[i]=a[i]+10;
else a[i]=a[i]*2;  
}
for( i=0;i<5;i++)
{
printf(" %d",a[i]);
}
}