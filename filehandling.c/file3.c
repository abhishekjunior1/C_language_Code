#include <stdio.h>

int main()
 {
    FILE *file = fopen("student_records.txt", "w");
    char name[100], reg_no[100], grade[10];
    
    for (int i = 1; i <=2; i++)
     {
        printf("Enter name of student %d: ", i);
        scanf("%s", name);
        printf("Enter registration number of student %d: ", i);
        scanf("%s", reg_no);
        printf("Enter grade of student %d: ", i);
        scanf("%s", grade);
        fprintf(file, "%s\t%s\t%s\n", name, reg_no, grade);
    }
    
    fclose(file);
    return 0;
}
