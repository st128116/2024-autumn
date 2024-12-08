#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    scanf_s("%d", &n);
    int count = 0;
    int* a = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf_s("%d", &a[i]);
    int t = 0;
    scanf_s("%d", &t);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == t)
            ++count;
    }
    printf("%d", count);
    free(a);
    getchar();
    return 0;
}