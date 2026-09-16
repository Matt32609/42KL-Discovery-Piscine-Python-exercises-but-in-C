#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
 {  {if (argc != 3)
        {printf("None");
        return 0;}

    char *keyword = argv[1];
    char *text = argv[2];
    
    char *matches = text;

    int count = 0;
    while ((matches = strstr(matches, keyword)) != NULL)
        {count = count + 1;
        matches = matches + strlen(keyword);}

    if (count == 0)
        printf("None");
    else
        printf("%d\n", count);

    return 0;}}



