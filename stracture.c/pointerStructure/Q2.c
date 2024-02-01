#include<stdio.h>
#include <string.h>
  typedef struct person{
  int age ;
  float weight;

}person;
int main()
{
  person p1;
  p1.age=23;
  p1.weight=55.5;

  person *x=&p1;

  printf("%p\n",x);
  printf("%p\n",&p1.age);
  printf("%p\n",&p1.weight);

}//structure are pass by value 
