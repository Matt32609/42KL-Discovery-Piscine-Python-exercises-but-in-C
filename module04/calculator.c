#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
    {int a;
    int b;

    printf("Enter the first number:");scanf("%d", &a);
    printf("Enter the second number:");scanf("%d", &b);

    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);

    if (b == 0)
        {printf("%d / %d = 0\n", a, b, a / b);}
    else if (a % b == 0)
        {printf("%d / %d = %d\n", a, b, a / b);}
    else
        {printf("%d / %d = %.3f\n", a, b, (double)a / b);}

    return 0;}