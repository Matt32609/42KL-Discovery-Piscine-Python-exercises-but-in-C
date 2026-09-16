#include <string.h>
#include <stdio.h>

int main(void)
    {char* first_name = "Matthew";
    char* last_name = "Kam";

    printf("%s %s", first_name, last_name);
    printf("\n");

    printf("Number of first name: %lu\n", strlen(first_name));
    printf("Number of last name: %lu\n", strlen(last_name));
    return 0;}