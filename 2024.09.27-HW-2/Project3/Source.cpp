#include <iostream>

int main(int argc, char* argv[]) {
	int x1 = 0;
	scanf_s("%d", &x1);
	int y1 = 0;
	scanf_s("%d", &y1);
	int r1 = 0;
	scanf_s("%d", &r1);
	int x2 = 0;
	scanf_s("%d", &x2);
	int y2 = 0;
	scanf_s("%d", &y2);
	int r2 = 0;
	scanf_s("%d", &r2);

	double s = sqrt(abs(x1 - x2) * abs(x1 - x2) + abs(y1 - y2) * abs(y1 - y2));

	if (s <= r1 + r2 && s >= abs(r1 - r2)) {
		printf("YES");
	}
	else {
		printf("NO");
	}
	return EXIT_SUCCESS;
}