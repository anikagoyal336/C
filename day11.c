#include <stdio.h>
int main()
{
    int units;
    float bill;
    printf("\nEnter the number of units consumed: ");
    scanf("%d", &units);
    if (units <= 100)
    bill = units * 2;
    else if (units <= 200)
    bill = 100 * 2 + (units - 100) * 3;
    else
    bill = 500 + (units - 200) * 5;
    printf("\nTotal electricity bill = %.2f", bill);
    return 0;

}