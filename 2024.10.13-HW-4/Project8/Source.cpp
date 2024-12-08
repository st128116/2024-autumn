#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    scanf_s("%d", &n);
    int* a = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; ++i)
        scanf_s("%d", &a[i]);
    int m = 0;
    scanf_s("%d", &m);
    int l = 0;
    int p = 0;
    for (int i = 0; i < m; ++i)
    {
        scanf_s("%d", &l);
        scanf_s("%d", &p);
        for (int j = l - 1; j < p; ++j)
            printf("%d ", a[j]);
        printf("\n");
    }
    free(a);
    getchar();
    return 0;
}