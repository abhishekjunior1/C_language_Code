#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *p,n,i;
  printf("enter the number of variable:");
  scanf("%d",&n);
  p=(int *)malloc(n * sizeof(int));
  printf("the  adress hold by P is:%p\n",p);
  for(int i =0; i<n;i++)
  {
    printf("\n The %d variable is: ",i+1);
    scanf("%d",p+1);
    printf("Memory location is : %p\n",p+1);
    printf("The value is :%d\n",*(p+i) );
  }
  return 0;
}