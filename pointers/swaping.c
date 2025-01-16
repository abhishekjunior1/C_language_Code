#include<stdio.h>
void  swap(int *x,int *y)
{
 int temp=*x; //temp =4;
  *x=*y;//a=3;
  *y=temp;//b=4;  
  // printf("value of a :%d\n",*x);
  // printf("value of b: %d\n",*y);
  return;
}

int main()
{
  int a=4;
  int b=3;
  printf("the value of a :%d\n",a);
  printf("the value of b: %d\n",b);
  swap(&a,&b);
  printf("value of a :%d\n",a);
  printf("value of b : %d\n",b);

}