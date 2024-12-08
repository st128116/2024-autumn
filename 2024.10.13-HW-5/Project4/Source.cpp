#include<iostream>

int main(int argc, char* argv[]) {
    int sum = 0;
    int min_i = 0;
    int max_i = 0;
    int n = 0;
    scanf_s("%d", &n);
    int* a = (int*)malloc(sizeof(int) * n);

    for (int i = 0; i < n; ++i)
    {
        scanf_s("%d", &*(a + i));
        if (*(a + i) > 0)
            sum += *(a + i);
        if (*(a + i) > *(a + max_i))
        {
            max_i = i;
        }
        if (*(a + i) < *(a + min_i))
        {
            min_i = i;
        }
    }

    int prod = 1;
    int k = 0;
    int l = 0;

    if (min_i < max_i)
    {
        k = min_i;
        l = max_i;
    }
    else
    {
        k = max_i;
        l = min_i;
    }

    for (int i = k+1; i < l; ++i)
    {
        prod *= *(a + i);
    }

    printf("%d %d ", sum, prod);
    free(a);
    return 0;
}