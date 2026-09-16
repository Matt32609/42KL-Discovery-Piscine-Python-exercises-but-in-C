#include <stdio.h>

int main(void)
    {int i = 0;
    {while (i <= 10)
        {printf("Table of %d", i);
        int j = 0;
        while (j <= 10)
            {printf("%d", i * j);
            if (j <= 10)
                printf(" ");
                j = j + 1;}
        printf("\n");
        i = i + 1;}}
    return 0;}