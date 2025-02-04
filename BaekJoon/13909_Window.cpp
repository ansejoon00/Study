#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> 
#include <math.h>

int main() {
    int num, index, count = 0;
    scanf("%d", &num);

    int* window = (int*)malloc(sizeof(int) * num);
    for (int i = 0; i < num; i++)
        window[i] = 0;

    for (int i = 1; i <= num; i++)
    {
        int x = num / i;
        for (int j = 1; j <= x; j++)
        {
            index = j * i - 1;
            window[index]++;
        }
    }

    for (int i = 0; i < num; i++)
    {
        if (window[i] % 2 != 0)
        {
            count++;
        }
    }
    printf("SQRT: ");
    printf("%d\n", (int)sqrt(num));

    printf("My Function : %d\n", count);
    free(window);

    return 0;
}
