#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int i;
int arr[n];
for(i =0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
int ar[n];
for(i=n-1;i>=0;i--)
{
ar[i]=arr[i];
printf("%d ",ar[i]);

  }
  
  }