#include <stdio.h>

int main()
{
  // int n;
  int arr[5], i, j, swap_count = 0;
  printf("Enter array elements: ");
  for (i = 0; i < 5; i++)
  {
    scanf("%d", &arr[i]);
  }
  
  for (i = 0; i < 5 - 1; i++)
  {
    for (j = 0; j < 5 - i - 1; j++)
    {
      if (arr[j] > arr[j + 1]) 
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        swap_count++;// also print passes 
      }
    }
  }
  
  printf("Sorted array: ");
  for (i = 0; i < 5; i++)
  {
    printf("%d ", arr[i]);
  }
  
  printf("\nNumber of swaps: %d\n", swap_count);
  
  return 0;
}
