#include<stdio.h>
int main()
{
   
  int regno[5],a;//it will consume 8 byte 4x2;

  printf("enter the array elemant: ");//for prnting array elemnet in one line
     for ( a=0;a<5;a++)
     {
     scanf("%d",&regno[a]);
     printf("the array element are:  %d \n", regno[a]);
     printf("address of array elements are:%d\n",&regno[a]);
     printf("\n \n");
     }


    

    

}

