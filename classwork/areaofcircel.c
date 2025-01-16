// wap to find the area of circle if the area is greator than  50 than find cercumference of the circle and  if area
//  is equal to 50 then find volume of sphere 

#include<stdio.h>
int main()
{ 
int a;
int r;
int p;
int v;
printf("enter the value of radius :");
scanf("%d",&r);
printf("radius = %d",r);
a = (2* 3.14 * r * r);
printf("\n");

if(a>50)
{
  p=2*3.14 * r;
  printf("perimeter of circle is =%d",p);

}
else if(a<=50)
{
v=(4/3)* 3.14 *r*r*r;
printf("volume of sphere is %d",v);
}
}
