#include<stdio.h>
int main()
{ 
int age;//declearation
printf("enter your age: ");
scanf("%d",&age); // initialization
 (age>=18)?printf("do voting\n"):printf("no voting \n");
//  printf("\n");
 if(age>=18){
  printf("do voting");
 }
else {
  printf("grow up ....not eligible for  voting");
  }
}