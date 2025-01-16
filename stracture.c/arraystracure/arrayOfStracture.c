#include<stdio.h>
#include<string.h>
int main()
{
  typedef struct pokemon{
    int hp;
    int  speed;
    int attack;
    char tier;
    char name[30];
  }pokemon;
  // pokemon  pikachu;//by using typedef we dont have to wright -->struct pokemon pikachu
  // pokemon charizard;
  pokemon arr[0];
  arr[0].hp=100;
  arr[0].attack=500;
  arr[0].speed=500;
  arr[0].tier='A';
  strcpy(arr[0].name,"pikachu");

  arr[1].hp=100;
  arr[1].attack=534;
  arr[1].speed=400;
  arr[1].tier='d';
  strcpy(arr[1].name,"chrizard");



  arr[2].hp=100;
  arr[2].attack=499;
  arr[2].speed=9000;
  arr[2].tier='B';
  strcpy(arr[2].name,"mewtwo");


  for (int i=0;i<=2;i++)
  {
    printf("%d\n",arr[i].hp);
    printf("%d\n",arr[i].attack);
    printf("%d\n",arr[i].speed);
    printf("%c\n",arr[i].tier);
    printf("%s\n",arr[i].name);
    printf("\n");
    

  }



}
