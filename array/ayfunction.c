#include<stdio.h>
void reference(int[],int );
int main()
{
   
    int arr[100],n,i;//it will consume 8 byte 4x2;

    printf("enter the n: ");//for prnting array elemnet in one line
    scanf("%d" ,&n);

   printf("enter the  array element ");
     for ( i=0;i<5;i++)
     {
     scanf("%d",&arr[i]);
     }
     printf("\n elements by reference ");

     reference (arr,n);
     return 0;
}
void reference(int x[] ,int size)
{
  int i;
  for(i=0;i<size;i++);
  {
    printf("%d ",x[i]);
  }
  
  }