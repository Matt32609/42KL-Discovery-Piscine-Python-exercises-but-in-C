#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
    {if (argc == 2) 
        {for (int i = 0; argv[1][i]; i = i + 1)
            {argv[1][i] = toupper(argv[1][i]);}
        printf("%s\n", argv[1]);}
    else
        {printf("None");}

    return 0;}