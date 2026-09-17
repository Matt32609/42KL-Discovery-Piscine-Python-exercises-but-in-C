#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
    {if (argc == 1)
        printf("None.");
    else
        printf("Parameters : %d\n", argc - 1);

        for (int p = 1; p < argc; p = p + 1)
            {printf("%s, %zu\n", argv[p], strlen(argv[p]));}
    
    return 0;}