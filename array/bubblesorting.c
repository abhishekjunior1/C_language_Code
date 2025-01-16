#include<stdio.h>

int main()
{
  int n;
  int arr[10], i, j, swap;
  printf("Enter array elements: ");
  for (i = 0; i < 10; i++)
  {
    scanf("%d", &arr[i]);
  }
  
  for (i = 0; i < 10 - 1; i++)
  {
    for (j = 0; j < 10 - i - 1; j++)
    {
      if (arr[j] > arr[j + 1]) 
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
  
  printf("Sorted array: ");
  for (i = 0; i < 10; i++)
  {
    printf("%d ", arr[i]);
  }
  
  // return 0;
}
