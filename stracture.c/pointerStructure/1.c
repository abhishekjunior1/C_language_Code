#include<stdio.h>
#include <string.h>
  typedef struct pokemon{
  int hp;
  int speed;
  int attack;
  char tier;
  char name[12];
} pokemon;
int main()
{
  pokemon pikachu;//variable 
  pokemon* x = &pikachu;//int *x--> adress of interger value 
  printf("%p",x);
  return 0;

}//structure are pass by value 
