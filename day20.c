#include <stdio.h>

int main()
{
    int lower, upper, n, i, flag;

    printf("Enter lower limit: ");
    scanf("%d", &lower);

    printf("Enter upper limit: ");
    scanf("%d", &upper);

    printf("Prime numbers are: ");

    for(n = lower; n <= upper; n++)
    {
        if(n < 2)
            continue;

        flag = 1;

        for(i = 2; i < n; i++)
        {
            if(n % i == 0)
            {
                flag = 0;
                break;
            }
        }

        if(flag == 1)
            printf("%d ", n);
    }

    return 0;
}