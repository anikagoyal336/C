#include <stdio.h>
int main ()
{
    int units, slab;
    float bill;
    printf("\n Enter Units Consumed:");
    scanf("%d", &units);
    if (units <= 50)
    slab =1;
    else if (units <= 100)
    slab =2;
    else if (units <= 200)
    slab =3;
    else if (units <= 300)
    slab =4;
    else
    slab =5;
    switch (slab)
    {
        case 1:
            bill = units * 2;
            break;
        case 2:
            bill = (50 * 2) + ((units - 50) * 3);
            break;
        case 3:
            bill = (50 * 2) + (50 * 3) + ((units - 100) * 4);
            break;
        case 4:
            bill = (50 * 2) + (50 * 3) + (100 * 4) + ((units - 200) * 5);
            break;
        case 5:
            bill = (50 * 2) + (50 * 3) + (100 * 4) + (100 * 5) + ((units - 300) * 6);
            break;
    }
    printf("\n Electricity Bill = %.2f", bill);
    return 0;
}