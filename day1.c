#include<stdio.h>
int main()
{
    float velocity, time, distance;
    printf("\nEnter velocity and time:");
    scanf("%f %f", &velocity, &time);
    distance = velocity * time; 
    printf("\nDistance = %.2f", distance);
    return 0;
}