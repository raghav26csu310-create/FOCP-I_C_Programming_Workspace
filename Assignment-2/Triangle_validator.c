// C program to determine angles of triangle
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("the angles of triangle are:");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b + c != 180 || a <= 0 || b <= 0 || c <= 0)
        printf("invalid");

    else if (a < 90 && b < 90 && c < 90)
        printf("triangle is acute");

    else if (a == 90 || b < 90 || c < 90)
        printf("triangle is right angled");

    else
        printf("triangle is obtuse");

    return 0;
}