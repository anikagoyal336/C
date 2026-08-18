#include <stdio.h>
int main ()
{
    float mass, velocity, kinetic_energy ;
    printf("\nEnter mass and velocity:");
    scanf("%f %f", &mass, &velocity);
    kinetic_energy = 0.5 * mass * velocity * velocity;
    printf("\nKinetic Energy = %.2f", kinetic_energy);
    return 0;
}