#include <iostream>

int main(int argc, char* argv[]) {
	int x1 = 0;
	scanf_s("%d", &x1);
	int y1 = 0;
	scanf_s("%d", &y1);
	int x2 = 0;
	scanf_s("%d", &x2);
	int y2 = 0;
	scanf_s("%d", &y2);
	double x_d = abs(x1 - x2);
	double y_d = abs(y1 - y2);
	if ((x_d == 0 && y_d != 0.0) || (y_d == 0 && x_d != 0) || x_d / y_d == 1.0) {
		printf("YES");
	}
	else {
		printf("NO");
	}
	return EXIT_SUCCESS;
}