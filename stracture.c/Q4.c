//typedef
// #include<stdio.h.>
// typedef float realnumber;// it will change the name of float to realnumber but it same as float

// int main()
// {
//   int x;
//   realnumber y =3.1654; //we can use float aslo in this place 
//   printf("%f",y);


// }
#include<stdio.h>
#include<string.h>
int main()
{
 typedef struct storybook {
  char name[50];
  float price;
  int pages;
} book;
// struct storybook a;===>book a
book d;//d,a are varable i.e shortcut to wright 
book a;//instead of writing " struct book a"  we write this  

d.pages=30;
printf("%d\n",d.pages);

strcpy(d.name,"abhishek");
printf("%s\n",d.name);
}


