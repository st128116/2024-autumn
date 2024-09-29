#include <iostream>

int main(int argc, char* argv[]) {
	int x = 0;
	scanf_s("%d", &x);
	int y = 0;
	scanf_s("%d", &y);
	if (y > x == 1 || x > y == 1) {
		printf("1");
	}
	else if (x > 1 && y > 1) {
		printf("2");
	}
	else {
		printf("0");
	}
	return EXIT_SUCCESS;
}