#include<stdio.h>
 main()
{
          FILE *f1;
          f1=fopen("abc.txt","w");
          char name[100];
          int regno;
          printf("enter the name : ");
          gets(name);
          printf("enter the regsitration no:");
          scanf("%d",&regno);
          fputs(name,f1);
          fprintf(f1,"\n%d",regno);
          printf("record saved");
        fclose(f1);
  }