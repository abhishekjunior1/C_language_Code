#include<stdio.h>
int main()
{ 
  int a=1;//globel variable a ke value har var store hoga 
  for(int i=1; i<=4;i++)
  {
      
    for(int j=1; j<=i; j++)
    {
      printf("%d",a);
      a++;
    }
    
    printf("\n");
  }

}
