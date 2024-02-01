#include<stdio.h>
#include<string.h>

struct book {
  char name[50];
  float price;
  int pages;
} hpotter;

int main() {
  printf("Enter the number of pages: ");
  scanf("%d", &hpotter.pages);
  printf("%d\n", hpotter.pages);

  printf("Enter the name of the book: ");
  fflush(stdin); // to clear the input buffer
  gets(hpotter.name);

  printf("%s\n", hpotter.name);

  return 0;
}
