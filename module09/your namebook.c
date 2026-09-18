#include <stdio.h>
#include <ctype.h>

int main(void)
    {char first[4][20] = {"jean", "grace", "xavier", "fifi"};
    char last[4][20] = {"valjean", "hopper", "niel", "brandacier"};

    int i;

    printf("[");
    for (i = 0; i < 4; i = i + 1)
        {first[i][0] = toupper(first[i][0]);
        last[i][0] = toupper(last[i][0]);

        printf("%s %s", first[i], last[i]);
        if (i < 3)
            {printf(", ");
        }}
    
    printf("]");

    return 0;}