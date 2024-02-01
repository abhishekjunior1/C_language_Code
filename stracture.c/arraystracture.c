#include <stdio.h>
struct student //student dtracture 
{
  int rn [3];//data members
  float cgpa[3];
  char grade[3];
  char name[3][50];

}s1 ,s2 ; //s1,s2  are  the object of student stracture  
struct student ; //other way to implement object 

  int main()
{
  int x;
  for(x=0;x<3;x++)
  {

  
  printf("enter reg no :",x+1); //x=1 is not compulsery 
  scanf("%d",&s2.rn[x]);//s1. is the object 

   printf("enter cgpa :",x+1);
  scanf("%f",&s2.cgpa[x]);//s1. is the object 

  fflush(stdin);
  printf("enter grade :",x+1);
  scanf("% c",&s2.grade);//s1. is the object 

  fflush(stdin);
  printf("enter name :",x+1);
  fgets(s2.name[x],20,stdin);
  }
    s1=s2;
for(x=0;x<3;x++)
{
  printf("size taken by object in memory %d",sizeof(s1));
  printf("the student details are ");
  // s1=s2;
  printf("\n %d\t %f\t%c\n",s1.rn[x],s2.cgpa[x],s2.grade[x]);
  puts(s2.name[x]);
}
}