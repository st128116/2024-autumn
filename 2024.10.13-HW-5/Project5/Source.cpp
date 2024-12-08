#include<iostream>

int main(int argc, char* argv[]) {
    int n = 0;
    scanf_s("%d", &n);
    int* a = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; ++i)
    {
        scanf_s("%d", &*(a + i));
    }
    int max = *(a);
    int l = 0;
    int m = -1;
    int sum = 0;
    while (l < n)
    {
        for (int i = l; i < n; ++i)
        {
            if (*(a + i) > max)
                max = *(a + i), l = i;
        }
        sum += (l - m) * *(a + l);
        m = l;
        if (l < n)
            ++l;
        if (l < n)
            max = *(a + l);
    }
    printf("%d", sum);
    free(a);
    return 0;
}

