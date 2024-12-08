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
    for (int i = n - 1; i >= 0; --i)
        printf("%d ", a[i]);
    free(a);
    getchar();
    return 0;
}