#include <stdio.h>

int main(void)
    {int number;
    printf("Enter a number less than 25");scanf("%d", &number);
    if (number >= 25)
        printf("None\n");
    else
        {while (number <= 25)
            {printf("Inside the variable, my number is %d\n", number);
            number = number + 1;}}
        return 0;}