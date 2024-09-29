#include <iostream>
#include <cmath>

int main(int argc, char* argv[]) {
	int a = 0;
	scanf_s("%d", &a);
	int b = 0;
	scanf_s("%d", &b);
	int c = 0;
	scanf_s("%d", &c);


	double d = b * b - 4.0 * a * c;
	if (d > 0 && a != 0) {
		printf("2\n");
		double x1 = (-1.0 * b - sqrt(d)) / (2.0 * a);
		printf("%f\n", x1);
		double x2 = (-1.0 * b + sqrt(d)) / (2.0 * a);
		printf("%f\n", x2);
	}
	else if (d == 0 && a != 0 && b != 0 && c != 0) {
		printf("1\n");
		double x = (-1.0 * b / (2.0 * a));
		printf("%f", x);
	}
	else if (a == 0 && b == 0 && c == 0) {
		printf("-1");
	}
	else if (a == 0 && b != 0) {
		printf("1\n");
		double x = -1.0 * c / b;
		printf("%f", x);

	}
	else {
		printf("0");
	}
	return EXIT_SUCCESS;
}