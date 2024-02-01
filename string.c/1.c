#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "God is great ";// OR char str[100] = "Physics Wallah";
    int i=0;
    while(str[i]!='\0')
    {
      printf("%c",str[i]);
      i++;

    }
    return 0; 
}
