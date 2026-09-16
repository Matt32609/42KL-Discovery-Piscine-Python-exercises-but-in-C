#include <stdio.h>
#include <string.h>

int main(void)
    {char first_name [50];
    char last_name [50];

    printf("Hi , what's your first name?");scanf("%49s",first_name);
    printf("And your last name?");scanf("%49s",last_name);
    
    printf("Well , pleasure to meet you. %s %s\n", first_name, last_name);
    
    return 0;}