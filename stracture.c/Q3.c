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
  strcpy(hpotter.name,"abhishel");//one of the way to declear in empty array 
  printf("%s\n", hpotter.name);

  return 0;
}
