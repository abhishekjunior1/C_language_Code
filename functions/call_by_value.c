#include<stdio.h>
void display(int x);
 void main()
{
  int x;
  printf("enter the value of x :");
  scanf("%d",&x);
  display(x);
  printf("value of x in main function %d \n",x);
  printf("adress is :%d",&x);

}
void  display(int x)
{
  x=x+1;
  printf("value of x in display function :%d \n",x);
  printf("adress is :%d \n",&x);
}