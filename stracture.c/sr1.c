#include <stdio.h>
struct student //student dtracture 
{
  int rn;//data members
  float cgpa;
  char grade;
  char name[50];
}s1 ,s2 ; //s1,s2  are  the object of student stracture  
struct student ; //other way to implement object 

  int main()
{
  printf("enter reg no :");
  scanf("%d",&s2.rn);//s1. is the object 

   printf("enter cgpa :");
  scanf("%f",&s2.cgpa);//s1. is the object 

  fflush(stdin);
  printf("enter grade :");
  scanf("% c",&s2.grade);//s1. is the object 

fflush(stdin);
   printf("enter name :");
  fgets(s2.name,20,stdin);

  printf("size taken by object in memory %d",sizeof(s1));
  printf("the student details are ");
  s1=s2;

  printf("\n %d\t %f\t %c\n",s1.rn,s2.cgpa,s2.grade);
  puts(s2.name);


}