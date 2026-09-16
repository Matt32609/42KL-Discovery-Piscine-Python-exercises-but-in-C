#include <stdio.h>

int main(void)
    {int number;
    printf("Enter a number");scanf("%d", &number);

    if (number > 0)
        printf("This number is positive.");
    else if (number == 0)
        printf("This number is both positive and negative.");
    else if (number < 0)
        printf("This number is negative.");

    return 0;}