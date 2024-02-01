#include<stdio.h>
int main()
{
  // int a =1;
  for(int i=1; i<=3;i++)
  {
    int a=1;
    for(int j=1; j<=i; j++)
    {
      printf("%d",a);
      a=a+2;

    }
    // a=a+2;
    printf("\n");
  }

}
