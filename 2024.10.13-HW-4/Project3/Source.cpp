#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    scanf_s("%d", &n);
    int* a = (int*)malloc(n * sizeof(int));
    int max = 0;
    int min = 0;
    for (int i = 0; i < n; ++i)
    {   
        scanf_s("%d", &a[i]);
        if (i == 0)
            min = a[i];
        if (a[i] > max)
            max = a[i];
        else if (a[i] < min)
            min = a[i];
    }
    for (int i = 0; i < n; ++i)
    {
        if (a[i] == max)
            a[i] = min;
        else if (a[i] == min)
            a[i] == max;
    }
    for (int i = 0; i < n; ++i)
        printf("%d ", a[i]);
    free(a);
    getchar();
    return 0;
}