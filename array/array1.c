#include<stdio.h>
int main()
{
  // int regno[5];//decleration of array
  int regno[5]={11,22,333,44,55};//declearation and initiallization of arrray

  printf("array old  value is  %d \n",regno[3]);
  printf("array  value is  %d \n",regno[6]);  //it will print garbage value
 
  // char ch[4]={'a','c','e'};
  // printf("array value is  % c", ch[2]);


   printf("enter the value ");
   scanf("%d",&regno[3]);//for changing the value of at index no[3]
   printf("array new value is  %d \n",regno[3]);
   if (regno[2]==regno[3])printf("equal\t");
   else printf("not equal");

   

}
