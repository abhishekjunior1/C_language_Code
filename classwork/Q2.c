 
 //write a  program to enter the student  details like name of the student ,reg no roll no, cgpa, grade, 
 
 
 
 #include<stdio.h>
int main()
{ 
  long long int reg_no,mob_no,sem;//lli ---"long long int" it is similar to int 
  float cgpa;
  char grad;
  char name[100];//similar to string 
  
 
 printf("plz enter your reg_no: ");
  scanf("%lli",&reg_no);
  
  printf("plz enter your mob_no: ");
  scanf("%lli",&mob_no);
  
  printf("plz enter your semester: ");
  scanf("%lli",&sem);
  
  printf("plz enter your cgpa: ");
  scanf("%f",&cgpa);
  
  printf("plz enter your grad: ");
  fflush(stdin); //stdin=standard output it means no need of  space before %c while using int and char together
  scanf("%c",&grad);//always use space before %c while using int and char together

  printf("plz enter your  full name: ");
  scanf("%[^\n]c",&name);
  
  //  printf(" student details are %lli %lli %lli %.2f %c %s ",reg_no,mob_no,sem,cgpa,grad, name);//.2f means upto 2 decimal places 
 
 printf(" \n your registration number is %lli",reg_no);
 printf(" \n your mobile  number is %lli",mob_no);
 printf(" \n your current semister is  is %lli",sem);
 printf(" \n your cgpa is %f",cgpa);
 printf(" \n your grad is %c",grad);
 printf(" \n your name  is %s",name);
// printf(" \n your grad is %s",name);
}
