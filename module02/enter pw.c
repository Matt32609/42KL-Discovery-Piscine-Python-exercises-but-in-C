#include <stdio.h>
#include <string.h>

int main(void)
    {char password[] = "C is awesome";
    char pw [50];
    printf("Enter the password");scanf("%49[^\n]", pw);

    if (strcmp(pw, password) == 0)
        printf("Access granted.");
    else
        printf("Access denied.");

    return 0;}
    
        