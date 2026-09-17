#include <Stdio.h>
#include <string.h>

int main(int argc, char *argv[1])
 {  {if (argc != 2)
        {printf("None");
        return 0;}}


    char *param = argv[1];  

    char input [100];
    printf("What was the parameter?");scanf("%99s", input);

    if (strcmp(input, param) == 0)
        printf("Good job!");
    else
        printf("Aww, try harder next time.");

    return 0;}
