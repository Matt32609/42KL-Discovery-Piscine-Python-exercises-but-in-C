#include <stdio.h>
#include <ctype.h>

int main(void)
    {char text [50];
    printf("Give me a string.");scanf("%49[^\n]", text);
    
    for (int i = 0; text[i] != '\0'; i = i + 1)
        {if (isupper(text[i]))
            {text[i] = tolower(text[i]);}
        else if (islower(text[i]))
            {text[i] = toupper(text[i]);}
        }
    
        printf("%s\n", text);

        return 0;}
          
        