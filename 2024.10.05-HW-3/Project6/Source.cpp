#include <stdio.h>

int main(int argc, char* argv[]) {
	int i = 0;
	scanf_s("%d", &i);
	int j = 0;
	scanf_s("%d", &j);
	int n1 = i;
	int n2 = j;
	while (i && j)
		if (i > j)
			i %= j;
		else
			j %= i;
	int gcd = i + j;
	int lcm = n1 * n2 / gcd;
	printf("%d", lcm);
	return 0;
}