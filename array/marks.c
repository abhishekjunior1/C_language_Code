#include<stdio.h>
int main()
{
   
  int marks[5];
  // int i;
  printf("enter the array elements");
  for ( int  i=0; i<5;i++)
  {
   scanf("%d",&marks[i]);
  //  printf(" printing the input taken by  user  is %d",marks[i]);

  }
  for (int i=0; i<5;i++)
  {
    if(marks[i]>=30)
  
    printf( " your elements are : %d \n",marks[i]);

  }
  
  
  }
    

    



