#include<stdio.h>
#include <stdlib.h>
int main()
{
//dynamic memory allocation

int* ptr=(int *) malloc(10*sizeof(int));//int* ptr=(int *) malloc(10*4)
printf("%d",*ptr);//printing garbage value 

}