#include <stdio.h>
#include <string.h>

int main(void)
    {char name[5][20] = {"florian", "marie", "virginie", "david", "franck"};
    char hair[5][20] = {"red", "blond", "brunette", "red", "red"};

    int i;

    printf("[");
    for (int i = 0; i < 5; i = i + 1)
        {if (strcmp(hair[i], "red") == 0)
            {printf("%s", name[i]);
            
            if (i < 4)
                printf(", ");}}
    printf("]");
    
    return 0;}