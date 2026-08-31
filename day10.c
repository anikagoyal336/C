#include <stdio.h>
int main ()
{char category;
int day;
float amount, discount_rate = 0 ;
float discount, additional_discount = 0;
float loyalty_discount = 0, total_discount, final_amount;
int valid = 1;
printf("\nEnter the category of the customer (S - Student, C - Senior Citizen, R - Regular): ");
scanf(" %c", &category);
printf ("\nEnter the day of the week (1 - Monday, 2 - Tuesday, 3 - Wednesday, 4 - Thursday, 5 - Friday, 6 - Saturday, 7 - Sunday): ");
scanf(" %d", &day);
printf("\nEnter the amount of purchase: ");
scanf("%f", &amount);
/* nested switch for customer category and day */
switch (category)
{
    case 'S':
    case 's':
    switch (day)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        discount_rate = 0.10; // 10% discount for students on weekdays
        break;
        case 6:
        case 7:
        discount_rate = 0.15; // 15% discount for students on weekends
        break;
        default:
        printf("\nInvalid day of the week.");
        valid = 0;
    }
    break;

    case 'C':
    case 'c':
    switch (day)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        discount_rate = 15 ;
        break;
        case 6:
        case 7:
        discount_rate = 20 ;
        break;
        default:
        printf("\nInvalid day of the week.");
        valid = 0;
    }
    break;

    case 'R':
    case 'r':
    switch (day)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        discount_rate = 5;
        break;
        case 5:
        discount_rate = 10;
        break;
        case 6:
        case 7:
        discount_rate = 12;
        break;
        default:
        printf("\nInvalid day of the week.");
        valid = 0;
    }
    /* Handle invalid input without if-else */
    switch (valid)
    {
        case 0:
        printf("\nInvalid input. Please check the category and day of the week.");
        break;
        case 1:
        discount = amount * discount_rate / 100;
        /* Additional discount for purchases above $100 */
        switch ((int)amount / 100)
        {
            case 1:
            additional_discount = 5; // $5 additional discount for purchases above $100
            break;
            case 2:
            additional_discount = 10; // $10 additional discount for purchases above $200
            break;
            default:
            additional_discount = 0; // No additional discount for purchases below $100
        }
        total_discount = discount + additional_discount;
        final_amount = amount - total_discount;
        printf("\nTotal Discount: $%.2f", total_discount);
        printf("\nFinal Amount to be Paid: $%.2f", final_amount);
        break;
    }
}
    printf("\nThank you for shopping with us!");
    return 0;

}