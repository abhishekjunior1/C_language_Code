#include <stdio.h>
#include <stdlib.h> // Added for using exit() function
typedef struct  // Define a struct for representing a user's account
 {
    int account_number;
    char name[50];
    float balance;
} User;

void create_account(User *user) {
  printf("******Account creating in process*****\n ");

    printf("Enter account number: ");
    scanf("%d", &user->account_number);

    printf("Enter name: ");
    scanf("%s", user->name);

    printf("Enter initial balance: ");
    scanf("%f", &user->balance);
}

void update_account(User *user) {
    printf("Enter new name: ");
    scanf("%s", user->name);

    printf("Enter new balance: ");
    scanf("%f", &user->balance);
}

void delete_account(User *user) {
    user->account_number = 0;
    user->balance = 0.0;
}

void display_account_details(User *user) {
    printf("Account number: %d\n", user->account_number);
    printf("Name: %s\n", user->name);
    printf("Balance: %.2f\n", user->balance);
}

void make_deposit(User *user) {
    float amount;
    printf("Enter amount to deposit: ");
    scanf("%f", &amount);

    user->balance += amount;
    printf("Successfully deposited %.2f. New balance: %.2f\n", amount, user->balance);
}

void make_withdrawal(User *user) {
    float amount;
    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);

    if (amount > user->balance) {
        printf("Error: Insufficient balance.\n");
    } else {
        user->balance -= amount;
        printf("Successfully withdrew %.2f. New balance: %.2f\n", amount, user->balance);
    }
}

int main() {
    User user1 = {0, "", 0.0};
    int choice;

    while (1) 
    {
        printf("\n *******************Welcome to our Online Banking System************************\n");
        printf("1. Create Account\n");
        printf("2. Update Account\n");
        printf("3. Delete Account\n");
        printf("4. Display Account Details\n");
        printf("5. Make a Deposit\n");
        printf("6. Make a Withdrawal\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                create_account(&user1);
                break;
            case 2:
                update_account(&user1);
                break;
            case 3:
                delete_account(&user1);
                break;
            case 4:
                display_account_details(&user1);
                break;
            case 5:
                make_deposit(&user1);
                break;
            case 6:
                make_withdrawal(&user1);
                break;
            case 7:
                printf("Exiting program. Thank you for using our online banking system!\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }
 return 0;
}