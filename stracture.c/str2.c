#include<stdio.h>

struct student{
	struct student2{
		float cgpa;
	} st2;
	int rn;
} s1;
struct student s2;

main() {
	printf("ENTER REG. NO: ");
	scanf("%d",&s1.rn);
	printf("ENTER CGPA: ");
	scanf("%f",&s1.st2.cgpa);
	s2=s1;  									// coping the object into another object
	printf("THE DETAILS OF STUDENT ARE:\n%d\t\t%f",s2.rn, s2.st2.cgpa);
	
}
