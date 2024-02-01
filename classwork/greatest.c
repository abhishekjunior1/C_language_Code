#include<stdio.h>
int main()
{ 
int a;//declearation
int  b;
int c;
scanf(" %d",&a); // initialization
scanf("  %d",&b);
scanf("  %d",&c);

if(a>b && a>c ) 
{
  printf(" a is greatest =  %d",a);
}

else if(b>a && b>c) {
  printf("  b is greatest = %",b);
}
else if (c>a && c>b){
  printf(" c is greeatest = %d",c);
  }
else{
  
 printf("equal");
}

}
