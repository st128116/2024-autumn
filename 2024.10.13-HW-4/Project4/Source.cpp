#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    scanf_s("%d", &n);
    int* a = (int*)malloc(n * sizeof(int));
    int max = 0;
    int sum = 0;
    for (int i = 0; i < n; ++i)
        scanf_s("%d", &a[i]);
    for (int i = 0; i < n; ++i)
    {   
        int i1 = i % n;
        int i2 = (i + 1) % n;
        int i3 = (i + 2) % n;
        sum = a[i1] + a[i2] + a[i3];
        if (sum > max)
            max = sum;
    }
    printf("%d ", max);
    free(a);
    getchar();
    return 0;
}