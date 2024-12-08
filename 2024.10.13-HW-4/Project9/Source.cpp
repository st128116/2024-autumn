#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    scanf_s("%d", &n);
    int i = 0;
    int* a = (int*)malloc(n * sizeof(int));
    for (i = 0; i < n; ++i)
        scanf_s("%d", &a[i]);
    int p = 0;
    scanf_s("%d", &p);
    for (i = 0; i < n; ++i)
    {
        if (p > a[i])
            break;
    }
    printf("%d", i + 1);
    free(a);
    getchar();
    return 0;
}