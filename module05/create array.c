#include <stdio.h>

int main(void)
    {int array[] = {2, 8, 9, 48, 8, 22, -12, 2};

    printf("[");
    for (int i = 0; i < 8; i = i + 1)
        {printf("%d", array[i]);

        if (i < 7)
            {printf(", ");}}
    printf("]");

    return 0;}