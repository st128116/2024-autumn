#include <iostream>

int main(int argc, char* argv[]) {
	int n = 0;
	scanf_s("%d", &n);
	int m = 0;
	scanf_s("%d", &m);
	int res = 0;
	if (n == 1) {
		res = m * 4;
		printf("%d", res);
	}
	else if (m == 1) {
		res = n * 4;
		printf("%d", res);
	}
	else if (n % 2 == 0 && m % 2 == 0) {
		res = 2 * ((n + 1) * m + n);
		printf("%d", res);
	}
	else if (n % 2 == 1 || m % 2 == 1) {
		res = (n + 1) * m + n * (m + 1);
		int additional_paths = n + m - 2;
		res = res + additional_paths;
		if ((n * m) % 2 == 0) {
			res = res + 2;
		}
		printf("%d", res);
	}
	return EXIT_SUCCESS;
}