#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
    {char *params = argv[1];
    
        if (argv == 0)
            printf("None.");
        else
            for (int p = 1; p < argc; p = p + 1)
                {size_t length = strlen(argv[p]);
                if (length >= 3 && strcmp(argv[p] + length - 3, "ism") == 0)
                    {continue;}
                printf("%sism\n", argv[p]);}

    return 0;}
