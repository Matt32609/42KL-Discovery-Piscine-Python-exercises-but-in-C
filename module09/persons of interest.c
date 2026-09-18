#include <stdio.h>

int main(void)
    {char name[4][30] = {"Ada Lovelace","Cecilia Payne","Lise Meitner", "Grace Hopper"};
    
    int year[4] = {1815, 1900, 1878, 1906};
    int order[4] = {0, 1, 2, 3};

    int i;
    int j;
    int temp;
    for (i = 0; i < 4; i = i + 1)
    {for (j = i + 1; j < 4; j = j + 1)
        {if (year[order[i]] > year[order[j]])
            {temp = order[i];
            order[i] = order[j];
            order[j] = temp;}}}

    for (i = 0; i < 4; i = i + 1)
    {printf("%s is a great scientist born in %d.\n", name[order[i]], year[order[i]]);}

    return 0;}