#include<iostream>

int main(int argc, char* argv[]) {
    int n = 0;
    scanf_s("%d", &n);
    int* a = (int*)malloc(sizeof(int) * n);

    for (int i = 0; i < n; ++i)
    {
        scanf_s("%d", &*(a + i));
    }

    int k = 0;
    scanf_s("%d", &k);

    if (k <= 0)
        k = n - abs(k) % n;
    else
        k = k % n;

    for (int i = 0; i < n; ++i)
    {
        printf("%d ", *(a + ((n - k + i) % n)));
    }

    free(a);
    return 0;
}
