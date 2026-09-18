#include <stdio.h>

int main(void)
    {int class_3B[4] = {18, 15, 8, 9};
    int class_3C[4] = {17, 15, 8, 13};

    int sum_3B = 0;
    int sum_3C = 0;
    int i;
    for (i = 0; i < 4; i = i + 1)
        {sum_3B = sum_3B + class_3B[i];
        sum_3C = sum_3C + class_3C[i];}

    printf("Average for class 3B : %.2f\n", (float)sum_3B / 4);
    printf("Average for class 3C : %.2f\n", (float)sum_3C / 4);

    return 0;}
