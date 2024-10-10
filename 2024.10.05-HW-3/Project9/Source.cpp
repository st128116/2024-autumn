#include <stdio.h>

int main(int arcv, char* argv[]) {
	long long a = 0;
	scanf_s("%lld", &a);
	long long b = 0;
	scanf_s("%lld", &b);
	long long c = 0;
	scanf_s("%lld", &c);
	long long d = 0;
	scanf_s("%lld", &d);

	for (int x = -100; x < 101; ++x) {
		long long y = a * x * x * x + b * x * x + c * x + d;
		if (y == 0)
			printf("%d\n", x);
	}
	return 0;
}