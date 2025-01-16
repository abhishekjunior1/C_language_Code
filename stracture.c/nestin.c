#include<stdio.h>
#include<string.h>
int main()
{
  typedef struct pokemon{
  int speed;
  int pow;
  }pokemon;

  typedef struct legindarypokemon{
  pokemon normal;//pokemon data type value will come here in normal;
  char ability[30];
  }legindarypokemon;
  legindarypokemon abhishek;

  abhishek.normal.speed=140;
  abhishek.normal.pow=1000;
  printf("%d",abhishek.normal.speed);


}
