#include<stdio.h>
#include <string.h>
typedef struct pokemon{
  int hp;
  int speed;
  int attack;
  char tier;
  char name[12];
}pokemon;

void funct(pokemon  pikachu){
  printf("%d\n",pikachu.hp);
  return ;
}
void func(pokemon abhishek){
  printf("%d",abhishek.speed);
  return ;
}

int main()
{
  pokemon pikachu,abhishek;//initilization
  pikachu.hp=60;//decleartion
  abhishek.speed=600;//declearation
  funct(pikachu);
  func(abhishek);
  return 0;
}//structure are pass by value 
