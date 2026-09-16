#include <stdio.h>

int main(void)
    {int number;
    printf("Enter a number");scanf("%d", &number);

    int i = 0;
    {while (i <= 9)
        {printf("%d * %d = %d\n", i, number, i * number);
        i = i + 1;}
    }
    return 0;}