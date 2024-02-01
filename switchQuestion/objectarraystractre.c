#include<stdio.h>

// ARRAY OF STRUCTURE

struct student
{			// student is structure
	int rn;				// data members
	float cgpa;
	char grade;
	char name[50];
}s1[3], s3[3], s2[];

main() {
	int x;
	for(x=0;x<3;x++){
	printf("ENTER REGISTRATION NUMBER: ");
	scanf("%d",&s1[x].rn);
	printf("ENTER CGPA: ");
	scanf("%f", &s1[x].cgpa);
	fflush(stdin);
	printf("ENTER GRADE: ");
	scanf("%c",&s1[x].grade);
	fflush(stdin);
	printf("ENTER NAME: ");
	fgets(&s1[x].name,20,stdin);
}
	printf("SIZE TAKEN BY OBJECT IN MEMORY IS: %d",sizeof(s1));
	s2[3]=s1[3];
	printf("\nTHE STUDENT DETAILS ARE: ");
	for(x=0; x<3; x++){
	
	printf("\n%d\t%f\t%c\t%s\n",s2[x].rn,s2[x].cgpa,s2[x].grade,s2[x].name);
}
}