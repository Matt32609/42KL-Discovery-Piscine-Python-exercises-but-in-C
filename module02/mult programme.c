#include <stdio.h>

int main(void)
    {int first_number;
    int second_number;
    
    printf("Enter the first number");scanf("%d", &first_number);
    printf("Enter the second number");scanf("%d", &second_number);

    int result = first_number * second_number;
    printf("%d * %d = %d\n", first_number, second_number, result);
    
    if (result == 0)
        printf("The number is both positive and negative.");
    else if (result > 0)
        printf("This number is positive.");
    else if (result < 0)
        printf("This number is negative.");

    return 0;}

    
