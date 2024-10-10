#include <stdio.h>

int main(int argc, char* argv[]) {
    int i = 0;
    scanf_s("%d", &i);
    int j = 0;
    scanf_s("%d", &j);
    while (i && j)
        if (i > j)
            i %= j;
        else
            j %= i;
    int n = i + j;
    long long a = 1;
    long long b = 1;
    long long c = 0;
    for (int k = 0; k < n; ++k) {
        a = b;
        b = c;
        c = (a + b) % 1000000000;
    }
    printf("%lld", c % 1000000000);
    return 0;
}