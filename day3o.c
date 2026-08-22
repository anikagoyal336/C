#include <stdio.h>
int main()
{
    float principal, rate, time, simple_interest;
    printf("\nEnter principal, rate and time:");
    scanf("%f %f %f", &principal, &rate, &time);
    simple_interest = (principal * rate * time) / 100;
    printf("\nSimple Interest = %.2f", simple_interest);
    return 0;
}