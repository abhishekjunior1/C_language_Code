#include <stdio.h>
int main()
{
  int  rg[3][3];
   float cgpa[3][3];
    char grade[3][3];
   int i, j;
   printf("Enter elements of 1st matrix\n");
   for(i=0; i<3; i++)
   {
   for(j=0; j<3 ;j++)
    {
       printf("Enter a%d%d: ", i, j);
       scanf("%d", &rg[i][j]);
    }
   }
  // Taking input using nested for loop
   printf("Enter elements of 2nd matrix\n");
   for(i=0; i<3; i++)
   {
    for(j=0; j<3; j++)
    {
       printf("Enter b%d%d: ", i, j);
       scanf("%f", &cgpa[i][j]);
    }
   }

   printf("Enter elements of 3nd matrix\n");
   for(i=0; i<3; i++)
   {
    for(j=0; j<3; j++)
    {
       printf("Enter cgpa%d%d: ", i, j);
       scanf(" %c", &grade[i][j]);
    }
   }
}

