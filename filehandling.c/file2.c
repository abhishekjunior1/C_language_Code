#include<stdio.h>

struct student 
{
  char name[10];
  int roll;
  float marks;
};
struct student students[3]={ { "tine",12,88.123},{"jack",34,71.182},{"abhishek",12,93.12}};
 int main()
{
     FILE *fp;
     int x;
    fp=fopen("qqq.txt","w");
    for(x=0;x<3;x++)
    {
    fwrite(&students[x],sizeof(students[x]),1,fp);
    // printf("record saved in file successfully");
    printf("\n%s",students[x].name);
    printf("\n%d",students[x].roll);
    printf("\n%f",students[x].marks);
    }

    fclose(fp);
}
//wap for name ,reg no , grade of 5 student in a file 
