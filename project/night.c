#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    int account_number;
    float balance;
} Account;

void create_account();
void view_account();
void deposit();
void withdraw();

int main() {
    int choice;
    printf("Welcome to the Online Banking System!\n");
    while (1) {
        printf("\nPlease choose an option:\n");
        printf("1. Create an account\n");
        printf("2. View account details\n");
        printf("3. Deposit money\n");
        printf("4. Withdraw money\n");
        printf("5. Exit\n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                create_account();
                break;
            case 2:
                view_account();
                break;
            case 3:
                deposit();
                break;
            case 4:
                withdraw();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}

void create_account() {
    Account account; // Declare an Account structure variable
    FILE *fp; // Declare a file pointer
    char filename[50]; // Declare a character array to hold the filename

    printf("\nEnter your name: ");
    scanf("%s", account.name);// Read the user's input into the name field of the account structure
    printf("Enter your account number: ");
    scanf("%d", &account.account_number);// Read the user's input into the account_number field of the account structure

    account.balance = 0; // intial value to be zero

    sprintf(filename, "%d.txt", account.account_number);// Create the filename using the account number

    fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("\nError creating account. Please try again.\n");
        return;
    }
    fwrite(&account, sizeof(Account), 1, fp);
    fclose(fp);
    printf("\nAccount created successfully!\n");
}

void view_account() {
    Account account;
    FILE *fp;
    int account_number;
    char filename[50];
    printf("\nEnter your account number: ");
    scanf("%d", &account_number);
    sprintf(filename, "%d.txt", account_number);
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("\nAccount not found. Please try again.\n");
        return;
    }
    fread(&account, sizeof(Account), 1, fp);
    fclose(fp);
    printf("\nName: %s\n", account.name);
    printf("Account Number: %d\n", account.account_number);
    printf("Balance: $%.2f\n", account.balance);
}
void deposit() {
    Account account;
    FILE *fp;
    int account_number;
    float amount;
    char filename[50];
    printf("\nEnter your account number: ");
    scanf("%d", &account_number);
    sprintf(filename, "%d.txt", account_number);
    fp = fopen(filename, "r+");
    if (fp == NULL) {
        printf("\nAccount not found. Please try again.\n");
        return;
    }
    fread(&account, sizeof(Account), 1, fp);
    printf("\nCurrent balance: $%.2f\n", account.balance);
    printf("Enter amount to deposit: ");
    scanf("%f", &amount);
    account.balance += amount;
    fseek(fp, 0, SEEK_SET);
    fwrite(&account, sizeof(Account), 1, fp);
    fclose(fp);
    printf("\nDeposit successful!\n");
}

void withdraw() {
    Account account;
    FILE *fp;
    int account_number;
    float amount;
    char filename[50];
    printf("\nEnter your account number: ");
    scanf("%d", &account_number);
    sprintf(filename, "%d.txt", account_number);
    fp = fopen(filename, "r+");
    if (fp == NULL) {
        printf("\nAccount not found. Please try again.\n");
        return;
    }
    fread(&account, sizeof(Account), 1, fp);
    printf("\nCurrent balance: $%.2f\n", account.balance);
    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);
    if (amount > account.balance) {
        printf("\nInsufficient funds. Please try again.\n");
        fclose(fp);
        return;
    }
    account.balance -= amount;
    fseek(fp, 0, SEEK_SET);
    fwrite(&account, sizeof(Account), 1, fp);
    fclose(fp);
    printf("\nWithdrawal successful!\n");
}