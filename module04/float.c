#include <stdio.h>
#include <math.h>

int main(void)
    {float number;
    printf("Please insert a number:");scanf("%f", &number);

    if (fmodf(number, 1.0) == 0.0)
        printf("This number is an integer.");
    else
        printf("This number is a decimal.");

    return 0;}
