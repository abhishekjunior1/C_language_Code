#include<stdio.h>
 int main()
{
	int n,a;
	printf("ENTER NUMBER OF PRINT TABLE: ");
	scanf("%d",&n);
	printf("%d:\n",n);
	for (a=1;a<=20;a++)
    {
		printf("%d*%d=%d\n",n,a,n*a);
	}
}