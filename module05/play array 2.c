#include <stdio.h>

int main(void)
    {int array[] = {2, 8, 9, 48, 8, 22, -12, 2};
    int new_array[8];
    int j = 0;

    for (int i = 0; i < 8; i = i + 1)
        {if (array[i] > 5)
            {new_array[j] = array[i] + 2;
            j = j + 1;}
        }
    
    printf("[");
    for (int i = 0; i < 8; i = i + 1)
        {printf("%d", array[i]);
        
        if (i < 7)
            printf(", ");}
    printf("]");

    printf("]\n");

    printf("[");
    for (int i = 0; i < j; i = i + 1)
        {printf("%d", new_array[i]);
        
        if (i < j - 1)
            printf(", ");}
    printf("]");

    return 0;}
