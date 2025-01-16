#include<stdio.h>
 int main()
{
  int sum=0;
  int product =1;
  int max=-1,min;
  int arr[8]={1,2,3,4,22,4,7,9};
  for(int i=0;i<8;i++)
  {
    if (arr[i]>max)
    
      max=arr[i];//best  way find max no ;
  sum=sum+arr[i];
  product=product*arr[i];
  // for(int j=1;j<9;j++)
  // {
  //   if(arr[j]>arr[i])
  //   max=arr[j];
  // }

  }
  printf("%d\n",sum);
  printf("%d\n",product);
  printf("%d\n",max);

  return 0;
}