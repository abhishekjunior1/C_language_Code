#include<stdio.h>
int main()
{
int x=3,y=5,z,*px,*py,*pz;
px=&x;
py=&y;
pz=&z;
*pz=*px+ *py;
printf("the sum is : %d",*pz);
}
