// C program for calculating average of 3 numbers
#include <stdio.h>
int main()
{
    int first, second, third;
    printf("input:");
    scanf("%d %d %d", &first, &second, &third);

    float average = (first + second + third) / 3;
    printf("output:Averge = %.2f", average);

 return 0;
}