#include<stdio.h>
#include<string.h>
int main()
{
  typedef struct pokemon{
  int speed;
  int pow;

  }pokemon;
  pokemon a,b,c;
  a.speed=400;
  a.pow=2000;
  b=a;//b mi a ke saaman aa gayabut we can not comapre two  entire struct 
  printf("%d",b.speed);


}