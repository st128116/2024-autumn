#include<iostream>

int main(int argc, char* argv[]) {
    int n = 0;
    scanf_s("%d", &n);
    int* a = (int*)malloc(sizeof(int) * n);

    for (int i = 0; i < n; ++i)
    {
        scanf_s("%d", &*(a + i));
    }

    int tr = 0;
    int ch = 0;

    for (int i = 0; i < n; ++i)
    {   
        if (*(a + i) % 2)
            printf("%d ", *(a + i)), ++tr;
    }

    for (int i = 0; i < n; ++i)
    {
        if (!(*(a + i) % 2))
            printf("%d ", *(a + i)), ++ch;
    }

    if (ch < tr)
        printf("NO");
    else
        printf("YES");

    free(a);
    return 0;
}