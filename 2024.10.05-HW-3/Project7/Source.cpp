#include <stdio.h>

int main(int argc, char* argv[]) {
    int i = 0;
    scanf_s("%d", &i);
    int j = 0;
    scanf_s("%d", &j);
    int n = i;
    int m = j;
    while (i && j)
        if (i > j)
            i %= j;
        else
            j %= i;
    int gcd = i + j;
    n = n / gcd;
    printf("%d", n);
    return 0;
}