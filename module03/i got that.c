#include <stdio.h>
#include <string.h>

int main(void)
    {char w [100];
    char word[] = "STOP";

    printf("What you gonna say?");scanf("%99s", w);

    if (strcmp(w, word) != 0)
        {while (strcmp(w, word) != 0)
            {printf("I got that, anything else?");
                printf("What you gonna say?");scanf("%99s", w);}}
    else
        printf("OK.");
    
        return 0;}
