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
    int x = 0;
    scanf_s("%d", &x);
    int d = abs(x - a[0]);
    int res = a[0];
    for (int i = 1; i < n; ++i)
    {
        if (abs(x - a[i]) < d)
        {
            d = abs(x - a[i]);
            res = a[i];
        }
        else if (abs(x - a[i]) == d)
        {
            if (res > a[i])
                res = a[i];
        }
    }
    printf("%d ", res);
    free(a);
    getchar();
    return 0;
}