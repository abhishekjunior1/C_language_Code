#include<stdio.h>
 int main()
{

    int x[5],*p,a;
    for(a=0; a<5; a++)
    {
    	printf("ENTER %d ELEMENT:",a+1);
    	scanf("%d",&x[a]);
    	printf("\nAddress of x[%d] is: %p",a+1,&x[a]);
	  }

}