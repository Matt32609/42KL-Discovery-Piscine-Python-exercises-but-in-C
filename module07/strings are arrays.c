#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{   {if (argc != 2)
        {printf("None.");
        return 0;}}

    char *text = argv[1];          
    int count = 0;

    for (int character = 0; character < strlen(text); character = character + 1)
        {if (text[character] == 'z')
            {printf("z");
            count = count + 1;
            }}

    if (count == 0)
        printf("None.");

    return 0;}

