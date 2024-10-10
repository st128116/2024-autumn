#include <stdio.h>

int main(int argc, char* argv[]) {
	int k = 0;
	scanf_s("%d", &k);
	for (int i = 0; i < k; ++i) {
		int n = 0;
		int m = 0;
		scanf_s("%d %d", &n, &m);
		double d = m * 19 + (n + 239) * (n + 366) / 2;
		printf("%d", (int)d);
		printf("\n");
	}
	return 0;
}