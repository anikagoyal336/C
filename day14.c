#include <stdio.h>
#include <limits.h>
int main ()
{
    int n, x;
    int largest = INT_MIN, second = INT_MIN;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &x);
        if (x > largest) {
            second = largest;
            largest = x;
        } else if (x > second && x != largest) {
            second = x;
        }
    }

    printf("Largest element is %d\n", largest);
    printf("Second largest element is %d\n", second);

    return 0;
}