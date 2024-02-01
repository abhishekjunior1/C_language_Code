#include<stdio.h>
int main()
{
  struct  pokemon{//creating  data type of name pokemon Ex-- int
    int hp;
    int speed;
    int attack;
    char tier; 
  } pikachu,abhishek;//DECLEAR  variable ex-->int a;

  pikachu.attack=60;//initilization or assiginig value   ex--> a=10;
  printf("enter pikachu hp:  \n");
  scanf("%d",&pikachu.hp);
  printf("%d \n",pikachu.hp);
   pikachu.speed=100;
   pikachu.tier='a';
   printf("%d\n",pikachu.attack);

   
   abhishek.attack=1011;
   abhishek.hp=1000;
   abhishek.speed=1000;
   abhishek.tier='b';
  printf("%c",abhishek.tier);


  return 0;


}