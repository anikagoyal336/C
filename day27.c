#include <stdio.h>

int main()
{
    int n, i;
    int even = 0, odd = 0;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even = %d\n", even);
    printf("Odd = %d", odd);

    return 0;
}