#include <stdio.h>
int main()
{
    int type;
    printf("1. Savings Account\n");
    printf("2. Current Account\n");
    printf("3. Salary Account\n");
    printf("4. Student Account\n");
    printf("Enter the type of account (1-4): ");
    scanf("%d", &type);
    switch (type)
    {
        case 1:
            printf("Savings Account: Offers interest on deposits and allows limited withdrawals.");
            break;
        case 2:
            printf("Current Account: Designed for businesses, allows unlimited transactions.");
            break;
        case 3:
            printf("Salary Account: Linked to an employer, offers benefits like zero balance.");
            break;
        case 4:
            printf("Student Account: Tailored for students, often with lower fees and benefits.");
            break;
        default:
            printf("Invalid account type selected.");
    }
    return 0;
}