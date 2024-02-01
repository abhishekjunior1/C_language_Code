#include<stdio.h>
#include<string.h>
int main()
{
  typedef struct cricketer{
    char name[20];
    int age ;
    int testmaches;
    // float avg;
  }cricketer;

  cricketer arr[20];//for 20 player 
  for(int i=0;i<20;i++)
  {
    fflush(stdin);
    gets(arr[i].name);
    scanf("%d",&arr[i].age);
    scanf("%d",&arr[i].testmaches);

  }
  for(int i=0;i<20;i++)
  {
    printf(" Name is :%s\n",arr[i].name);
    printf(" His age is :%d\n",arr[i].age);
    printf(" No of test played is :%d\n",arr[i].testmaches);
    
  }
return 0;


}