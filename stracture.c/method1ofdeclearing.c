#include<stdio.h>
int main()
{
  struct  pokemon{//creating  data type of name pokemon
    int hp;// pokemon is similar to int or float datatype
    int speed;//we have not stored anything till now
    int attack;
    char tier; 
  };
  struct pokemon pikachu; //DECLEAR  int//int a=== pokemon pikachu ---daba bana jo 3 parts mi divided hai
   pikachu.attack=60;//initilization
  printf("enter pikachu hp:  \n");
  scanf("%d",&pikachu.hp);
  printf("%d \n",pikachu.hp);
   pikachu.speed=100;
   pikachu.tier='a';
   printf("%d\n",pikachu.attack);

   struct pokemon abhishek;//naya daba 
   abhishek.attack=1011;
   abhishek.hp=1000;
   abhishek.speed=1000;
   abhishek.tier='b';
  printf("%c",abhishek.tier);


  return 0;

}