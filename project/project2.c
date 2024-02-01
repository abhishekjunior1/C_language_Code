#include <stdio.h>
#include <string.h>
#include <stdlib.h> // Added for using exit() function

struct user{
    char name[50];
    char phone[20];
    float balance;
};

int main()
{
    struct user users[10];// // Array to store users
    int num_users = 0;// Number of users initialized to 0
    int choice;// variable to store user's choice
    int pin = 1234; // Added PIN for access control

    do{
        // printing menu 
        printf("\n\n********* Bank Management System *********\n");
        printf("\n1. Add a new account\n2. Display all accounts\n3. Display account details\n");
        printf("4. Transfer money\n5. Update account\n6. Delete account\n7. Exit\n"); // Updated menu
        printf("Enter your choice:\t");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:// Add new account

                printf("\nPlease enter the account holder name:\t");
                scanf("%s",users[num_users].name);
                printf("\nPlease enter the phone number:\t");
                scanf("%s",users[num_users].phone);
                printf("\nPlease enter the initial balance:\t");
                scanf("%f",&users[num_users].balance);
                num_users++;
                printf("\nAccount has been created successfully");
                break;
            case 2:
            // Display all accounts
                if(num_users == 0)
                {
                    printf("\nNo accounts registered yet");
                }
                else
                {
                    printf("\n********* Account details *********\n");
                    int i;
                    for(i = 0; i < num_users; i++)
                    {
                        printf("\nAccount holder name:\t%s",users[i].name);
                        printf("\nPhone number:\t%s",users[i].phone);
                        printf("\nAccount balance:\tRs.%.2f",users[i].balance);
                        printf("\n");
                    }
                }
                break;
            case 3:
             // Display account details
                printf("\nPlease enter the phone number:\t");
                char phone[20];
                scanf("%s",phone);

                int i, index = -1;
                for(i = 0; i < num_users; i++)
                {
                    if(strcmp(phone, users[i].phone) == 0)
                    {
                        index = i;
                        break;
                    }
                }

                if(index == -1)
                {
                    printf("\nAccount number not registered");
                }
                else
                {
                    printf("\n********* Account details *********\n");
                    printf("\nAccount holder name:\t%s",users[index].name);
                    printf("\nPhone number:\t%s",users[index].phone);
                    printf("\nAccount balance:\tRs.%.2f",users[index].balance);
                }
                break;
        
             case 4:
                    // Transfer money between accounts
                    printf("\nPlease enter the phone number to transfer the balance:\t");
                    scanf("%s",phone);
                    printf("\nPlease enter the amount to transfer:\t");
                    float amount;
                    scanf("%f",&amount);

                    int transfer_index = -1;
                    for(int j = 0; j < num_users; j++)
                    {
                        if(strcmp(phone, users[j].phone) == 0)
                        {
                            transfer_index = j;
                            break;
                        }
                    }

                    if(transfer_index == -1){
                        printf("\nAccount number not registered");
                    }
                    else
                    {
                        if(amount > users[transfer_index].balance)
                        {
                            printf("\nInsufficient balance");
                        }
                        else{
                            users[transfer_index].balance -= amount;
                            printf("\nPlease enter the phone number to transfer to:\t");
                            scanf("%s",phone);

                            int receiver_index = -1;
                            for(int k = 0; k < num_users; k++)
                            {
                                if(strcmp(phone, users[k].phone) == 0)
                                {
                                    receiver_index = k;
                                    break;
                                }
                            }

                            if(receiver_index == -1)
                            {
                                printf("\nAccount number not registered");
                            }
                            else
                            {
                                users[receiver_index].balance += amount;
                                printf("\nYou have successfully transferred Rs.%.2f to %s", amount, phone);
                            }
                        }
                    }
                    break;

                    case 5:// for updation of account 
                    printf("\nPlease enter the phone number to update:\t");
                    scanf("%s", phone);

                    int k, update_index = -1;
                    for (k = 0; k < num_users; k++) 
                    {
                        if (strcmp(phone, users[k].phone) == 0)
                        { // check if phone number exists in the array of users
                            update_index = k;// store the index of the user in the array
                            break;
                        }
                    }

                    if (update_index == -1)
                     {
                        printf("\nAccount number not registered");
                    } else 
                    {
                        printf("\nPlease enter the new name:\t");
                        scanf("%s", users[update_index].name);

                        printf("\nPlease enter the new balance:\t");
                        scanf("%f", &users[update_index].balance);// update the balance of the user at the specified index

                        printf("\nDetails updated successfully!");
                    }
                    break;

                case 6:  
                // for deleting account 
                printf("\nPlease enter the phone number to delete:\t");
                    scanf("%s", phone);

                    int l, delete_index = -1;// If account number not found in the array
                    for (l = 0; l < num_users; l++)
                     {
                        if (strcmp(phone, users[l].phone) == 0)
                         {
                            delete_index = l;
                            break;
                        }
                    }

                    if (delete_index == -1) 
                    {
                        printf("\nAccount number not registered");
                    } 
                    else 
                    {
                        for(int m = delete_index; m < num_users - 1; m++) 
                         {
                            users[m] = users[m + 1];
                         }
                        num_users--;
                        printf("\nAccount deleted successfully!");
                    }
                    break;


                case 7:
                    printf("\nThank you for using our banking system. Have a nice day!");
                    exit(0);

                default:
                    printf("\nInvalid choice. Please enter a valid option.");
           }
    


    } while (1);

     return 0;
 }



