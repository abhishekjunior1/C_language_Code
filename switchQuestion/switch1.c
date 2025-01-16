//WAP to set up a atm machine process using switch case 
// 1. check the balance 
// 2. print the mini ststment 
// 3.withdrow the money 
// 4.change the pin
// 5. tranfer amount to another bank

#include <stdio.h>
main()
{
	int choice;
  printf("enter the choice");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			float r,area;
			printf("Enter the radius");
			scanf("%f",&r);
			area=3.14*r*r;
			printf("Area of circle is %f",area);
			break;
		case 2:
			float s,c;
			printf("Enter the radius");
			scanf("%f",&s);
			c=3.14*2*s;
			printf("circumference of circle: %f",c);
			break;
		case 3:
			int l,b,a;
			printf("Enter the length");
			scanf("%d",&l);
			printf("Enter the breath");
			scanf("%d",&b);
			a=l*b;
			printf("area of rectangle",a);
			break;
		case 4:
			float C,f;
			printf("Enter the temp in celsius");
			scanf("%f",&C);
			f=((C)*9/5)+32;
			printf("temp in fahrenheit %f",f);
			break;
		default:
			printf("invalid input");
			break;
	}
}