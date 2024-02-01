#include<stdio.h>
int main()
{
  for(int i=1; i<=5;i++)
  {
      char ch ='A';
    for(int j=1; j<=i; j++)
    {
      // int d =a + 64;
      //  char ch = (char)d;
      // printf("%c",  ch );
      // ch++;
      if (i%2==0){
      printf("%c",ch);
      ch++;
      }
      else printf("%d",j);

    }
    
    printf("\n");
  }

}
