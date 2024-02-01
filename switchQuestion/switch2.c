//WAP to set up a atm machine process using switch case 
// 1. check the balance 
// 2. print the mini ststment 
// 3.withdrow the money 
// 4.change the pin
// 5. tranfer amount to another bank

#include<stdio.h>
int main()
{
  int choice;
  printf("plz enter your chpoice");
  scanf("%d",choice);
  int pin;
  scanf("%d",&pin);
 int balance = 100000;

  if(pin==1234)
  {
     switch(choice)
       {
          case 1:
          printf("checking your bank balance");
          printf("your current balance is  %d",balance);
          printf("\n");
          break;

          case 2:
          float deposit;
           printf("Enter the amount you want to deposit: ");
            scanf("%f",&deposit);
            balance = balance + deposit;
            printf("Successfully deposited: \n %.2f",deposit);

            printf(" Your new balance is:\n %.2f",balance);
            break;

          case 3:
          float withdraw;
          printf(" Enter the amount you want to withdraw: \n");
            scanf("%f",&withdraw);
            if(withdraw > balance)
            {
                printf(" Insufficient balance. Please try again.\n");
            }
            else
            {
                balance = balance - withdraw;
                printf("\n Successfully withdrawn:  %.2f\n",withdraw);
                printf("\n Your new balance is: %.2f\n",balance);
            }
            break;
    


          case 4:
            
             
            printf(" Thank you for using the ATM machine.\n");
            break;

          default:

            printf("\n Invalid option. Please try again.\n");

       }
   }

  
  else printf(" sahi se pin daal");

}


             

  
         
              







          



