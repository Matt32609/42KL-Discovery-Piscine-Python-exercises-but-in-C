#include <stdio.h>
#include <ctype.h>

int main(void)
    {char word [50];
    printf("Give me a word");scanf("%49[^\n]", word);
    
    for (int i = 0; word[i]; i = i + 1)
        {word[i] = toupper(word[i]);}
    
    printf("%s\n", word);

    return 0;}