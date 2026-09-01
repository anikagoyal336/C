#include <stdio.h>
float balance = 5000.00 ;
float transactions [50] ;
int count = 0;
void check_balance()
{
    printf("\nCurrent balance: $%.2f", balance);
}
void deposit()
{
    float amount;
    printf("\nEnter amount to deposit:$ ");
    scanf("%f", &amount);
    if (amount > 0)
    {
        balance += amount;
        transactions[count++] = amount;
        printf("\nDeposited: $%.2f", amount);
    }
    else
    {
        printf("\nInvalid deposit amount.");
    }
}
void withdraw()
{
    float amount;
    printf("\nEnter amount to withdraw:$ ");
    scanf("%f", &amount);
    if (amount > 0 && amount <= balance)
    {
        balance -= amount;
        transactions[count++] = -amount;
        printf("\nWithdrew: $%.2f", amount);
    }
    else
    {
        printf("\nInvalid withdrawal amount or insufficient funds.");
    }
}
void history()
{
    printf("\nTransaction History:\n");
    for (int i = 0; i < count; i++)
    {
        if (transactions[i] > 0)
            printf("Deposited: $%.2f\n", transactions[i]);
        else
            printf("Withdrew: $%.2f\n", -transactions[i]);
    }
}
int main()
{
    int choice;
    do
    {
        printf("\nBanking System Menu:");
        printf("\n1. Check Balance");
        printf("\n2. Deposit");
        printf("\n3. Withdraw");
        printf("\n4. Transaction History");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                check_balance();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                history();
                break;
            case 5:
                printf("\nExiting the program.");
                break;
            default:
                printf("\nInvalid choice. Please try again.");
        }
    } while (choice != 5);
    return 0;
}