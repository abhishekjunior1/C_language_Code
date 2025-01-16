#include<stdio.h>
 int main()
{
int x;
printf(" enter a no:");
scanf("%d",&x);

if ( x%2==0)
goto even;
// return ;

else 
goto odd;

// return ;

even:
printf("% is even",x);
// return ;

odd:
printf("%d is odd ",x);
// return ;

}