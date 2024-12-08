#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    scanf_s("%d", &n);
    int* a = (int*)malloc(n * sizeof(int));
    int* b = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; ++i)
        scanf_s("%d", &a[i]);
    for (int i = 0; i < n; ++i)
        scanf_s("%d", &b[i]);
    int max = 0;
    int max_i = 1;
    for (int i = 0; i < n; ++i)
    {
        if (max < a[i] * b[i])
        {
            max = a[i] * b[i];
            max_i = i + 1;
        }

    }
    printf("%d ", max_i);
    free(a);
    getchar();
    return 0;
}