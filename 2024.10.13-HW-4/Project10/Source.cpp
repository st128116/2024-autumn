#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    scanf_s("%d", &n);
    int a = 0;
    scanf_s("%d", &a);
    int b = 0;
    scanf_s("%d", &b);
    int c = 0;
    scanf_s("%d", &c);
    int d = 0;
    scanf_s("%d", &d);
    int* x = (int*)malloc(n * sizeof(int));
    int tmp = 0;
    for (int i = 0; i < n; ++i)
        x[i] = i + 1;
    for (int i = a; i <= (a + b) / 2; ++i)
    {
        tmp = x[i - 1];
        x[i - 1] = x[b - i + a - 1];
        x[b - i + a - 1] = tmp;
    }
    for (int i = c; i <= (c + d) / 2; ++i)
    {
        tmp = x[i - 1];
        x[i - 1] = x[d - i + c - 1];
        x[d - i + c - 1] = tmp;
    }
    for (int i = 0; i < n; ++i)
        printf("%d ", x[i]);
    free(x);
    getchar();
    return 0;
}