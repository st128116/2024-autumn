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
    int l = 0;
    scanf_s("%d", &l);
    int r = 0;
    scanf_s("%d", &r);
    int max = a[l - 1];
    int max_i = l;
    for (int i = l; i < r; ++i)
    {
        if (a[i] > max) {
            max = a[i];
            max_i = i + 1;
        }
    }
    printf("%d ", max);
    printf("%d", max_i);
    free(a);
    getchar();
    return 0;
}