// C program to create basic calculator using switch
#include <stdio.h>
int main()
{
    float a, b, result;
    char sign;

    printf("the input numbers are:");
    scanf("%f %f", &a, &b);
    printf("\nthe operator is:");
    scanf(" %c", &sign);

    switch (sign)
    {
    case '+':
        result = a + b;
        printf("the output is:%.2f", result);
        break;

    case '-':
        result = a - b;
        printf("the output is:%.2f", result);
        break;

    case '*':
        result = a * b;
        printf("the output is:%.2f", result);
        break;

    case '/':
        if (b == 0)
            printf("cannot divide by zero");
        else
        {
            result = a / b;
            printf("the output is:%.2f", result);
        }
        break;

    case '%':
        if ((int)b == 0)
            printf("cannot divide by zero");
        else
            result = (int)a % (int)b;
        printf("the output is:%.2f", result);
        break;
    }
    return 0;
}