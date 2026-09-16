#include <stdio.h>
#include <string.h>

int main(void)
    {char* first_name = "Matthew";
    char* last_name = "Kam";
    char* whole_name = "Matthew Kam";

    printf("%s", whole_name);
    printf("\n");

    printf("Number of first name: %lu\n", strlen(first_name));
    printf("Number of last name: %lu\n", strlen(last_name));
    printf("Number of whole name: %lu\n", strlen(whole_name));

    return 0;}