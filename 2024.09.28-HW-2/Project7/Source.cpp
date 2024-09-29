#include <iostream>
#include <cmath>

int main(int argc, char* argv[]) {
	int k = 0;
	scanf_s("%d", &k);
	int m = 0;
	scanf_s("%d", &m);
	int n = 0;
	scanf_s("%d", &n);

	if (n < k) {
		printf("%d", 2 * m);
	}
	else if (k == 0 || m == 0 || n == 0) {
		printf("%d", 0);
	}
	else {
		int t = ceil((2 * (double)n / (double)k)) * m;
		printf("%d", t);
	}

	return EXIT_SUCCESS;
}