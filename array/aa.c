#include<stdio.h>
  
int main()
{
    int a[20],i,x,n;
    printf("How many elements?");
    scanf("%d",&n);
     
    printf("Enter array elements:");
    for(i=0;i<n;++i)
        scanf("%d",&a[i]);
     
    printf("Enter element to search:");
    scanf("%d",&x);
     
    for(i=0;i<n;++i)
        if(a[i]==x)
            break;
     
    if(i<n)
        printf("Element found at index %d",i);
    else
        printf("Element not found");
        printf("jai shree raam ");
         printf("jai shree raam ");
  return 0;
}

//WAp to calu the bill of the customer who purchased  the grocieres product
//product name ,prpduct Qunatity ,product price , 