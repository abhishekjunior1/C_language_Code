#include<stdio.h>
int main()
{
int n,i;
printf("plx enter your limit: ");
scanf("%d",&n);
 int a=0;
for(i=2;i<n;i++)// n is the number and woh waha tak chelega 25 tho it will go till 24
{
  if(n%i==0){
    // printf("it is composite no \n ");//jitna baar i se divisible hoga uthna baar print statment execute hoge if 10 then 2,5,(2 baar)
// without break statment 2 baar print hoga12
printf("\n  facors of a composite no %d",i);
a=1;
    // break;
  }
}
// printf("not a prime no \n");
if(a==0) printf("\nit is a prime no \n");
else printf("\n it is a composite no");
return 0;
}
