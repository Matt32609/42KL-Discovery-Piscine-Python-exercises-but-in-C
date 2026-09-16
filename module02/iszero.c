#include <stdio.h>

int main(void)
    {int number;
    printf("Enter a number.");scanf("%d", &number);

    if (number == 0)
        printf("This number is an integer.");
    else
        printf("This number is not an integer.");

    return 0;}