#include <stdio.h>
int main()
{
    int n, i, j, spaces;
    scanf("%d", &n);

    for(i = 1; i <= n / 2 + 1; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }

        spaces = 2 * (n / 2 + 1 - i) + 1;

        for(j = 1; j <= spaces; j++)
        {
            printf(" ");
        }

        for(j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    for(i = n / 2; i >= 1; i--)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }

        spaces = 2 * (n / 2 + 1 - i) + 1;

        for(j = 1; j <= spaces; j++)
        {
            printf(" ");
        }

        for(j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}