// C program for calculating quotient and remainder
#include <stdio.h>
int main()
{
    int first, second;
    printf("enter the first number:");
    scanf("%d", &first);

    printf("enter the second number:");
    scanf("%d", &second);

    printf("input: %d %d\n", first, second);

    int quotient = first / second;
    printf("quotient:%d\n", quotient);

    int remainder = first % second;
    printf("remainder:%d\n", remainder);

    return 0;
}