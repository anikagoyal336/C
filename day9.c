#include <stdio.h>
int main ()
{
    float weight, charge;
    int type, slab;
    printf("\n Enter Weight of the Parcel in Kg:");
    scanf("%f", &weight);
    printf("\n Enter delivery type:");
    printf("\n 1. Normal Delivery");
    printf("\n 2. Express Delivery");
    printf("\n 3. Same Day Delivery");
    scanf("%d", &type);
    if (weight <= 2)
    slab =1;
    else if (weight <= 5)
    slab =2;
    else if (weight <= 10)
    slab =3;
    else
    slab =4;
    switch (type)
    {
        case 1:
        if (slab==1)
        charge = weight *50;
        else if (slab==2)
        charge = weight * 45;
        else if (slab == 3)
        charge = weight * 40;
        else
        charge = weight * 35;
        break;

        case 2:
        if (slab==1)
        charge = weight * 80;
        else if (slab==2)
        charge = weight * 70;
        else if (slab == 3)
        charge = weight * 60;
        else
        charge = weight * 50;
        break;

        case 3:
        if (slab==1)
        charge = weight * 120;
        else if (slab==2)
        charge = weight * 100;
        else if (slab == 3)
        charge = weight * 90;
        else
        charge = weight * 75;
        break;

        default:
        printf("\n Invalid Delivery Type");
        return 0;
    }
printf("\n Delivery Charge = %.2f", charge);
return 0;
}