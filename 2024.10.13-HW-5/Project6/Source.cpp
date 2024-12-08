#include<iostream>

int main(int argc, char* argv[]) {
    int n = 0;
    scanf_s("%d", &n);
    int m = 0;
    scanf_s("%d", &m);
    int* a = (int*)malloc(sizeof(int) * n);
    int* b = (int*)malloc(sizeof(int) * m);
    int r = 100001;
    int* d = (int*)malloc(sizeof(int) * r);

    for (int i = 0; i < n; ++i)
    {
        scanf_s("%d", &*(a + i));
    }

    for (int i = 0; i < m; ++i)
    {
        scanf_s("%d", &*(b + i));
    }

    for (int i = 0; i < r; ++i)
    {
        *(d + i) = i;
    }

    for (int i = 0; i < n; ++i)
    {
        *(d + (*(a + i))) = -1;
    }

    for (int i = 0; i < m; ++i)
    {
        if (*(d + (*(b + i))) == -1)
            *(d + (*(b + i))) = -2;
    }

    for (int i = 0; i < r; ++i)
    {
        if (*(d + i) == -2)
            printf("%d ", i);
    }

    free(a);
    free(b);
    free(d);
    return 0;
}