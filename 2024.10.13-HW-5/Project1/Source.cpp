#include<iostream>

int main(int argc, char* argv[]) {
    int n = 0;
    scanf_s("%d", &n);
    int i_0 = 0;
	int* a = (int*)malloc(sizeof(int) * n);

    for (int i = 0; i < n; ++i)
    {
        scanf_s("%d", &*(a + i));
        if (*(a + i_0) > *(a + i))
            i_0 = i;
    }

    for (int i = 0; i < n; ++i)
    {
        printf("%d ", *(a + (i_0 + i) % n));
    }

    free(a);
    return 0;
}

