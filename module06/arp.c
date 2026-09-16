#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
    {if (argc < 3)
        printf("None");
    else
        for (int i = argc - 1; i > 0; i = i - 1)
            {printf("%s\n", argv[i]);}

return 0;}
