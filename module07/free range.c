#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{   if (argc != 3)
        {printf("None.");
        return 0;}
    
    int start = atoi(argv[1]);
    int end = atoi(argv[2]);

    if (start >= end)
        {printf("None");
        return 0;}

    printf("[");
    for (int i = start; i <= end; i = i + 1)
        {printf("%d", i);
        
        if (i < end)
            {printf(", ");}}
    printf("]");

    return 0;}


    
    