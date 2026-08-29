#include <stdio.h>
#include <math.h>
int main()
{
    int marks, slab;
    printf("\n Enter Marks obtained out of 100: ");
    scanf("%d", &marks);
    if (marks <= 39)
    slab = 1;
    else if (marks <= 49)
        slab = 2;
    else if (marks <= 59)
        slab = 3;
    else if (marks <= 79)
        slab = 4;
        else
        slab = 5;
    switch (slab)
    {
        case 1:
            printf("\n Grade = FAILED");
            break;
        case 2:
            printf("\n Grade = THIRD DIVISION");
            break;
        case 3:
            printf("\n Grade = SECOND DIVISION");
            break;
        case 4:
            printf("\n Grade = FIRST DIVISION");
            break;
        case 5:
            printf("\n Grade = HONOURS");
            break;
    }
    return 0;

}