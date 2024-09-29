#include <iostream>

int main(int argc, char* argv[]) {
	int k = 0;
	scanf_s("%d", &k);
	int w = 0;
	scanf_s("%d", &w);
	int a1 = 0;
	scanf_s("%d", &a1);
	int b1 = 0;
	scanf_s("%d", &b1);
	int a2 = 0;
	scanf_s("%d", &a2);
	int b2 = 0;
	scanf_s("%d", &b2);
	int a3 = 0;
	scanf_s("%d", &a3);
	int b3 = 0;
	scanf_s("%d", &b3);

	if (w >= a1 + a2 + a3 && k <= b1 + b2 + b3) {
		printf("YES");
	}
	else if (w >= a1 + a2 && k <= b1 + b2) {
		printf("YES");
	}
	else if (w >= a1 + a3 && k <= b1 + b3) {
		printf("YES");
	}
	else if (w >= a3 + a2 && k <= b3 + b2) {
		printf("YES");
	}
	else if (w >= a1 && k <= b1) {
		printf("YES");
	}
	else if (w >= a2 && k <= b2) {
		printf("YES");
	}
	else if (w >= a3 && k <= b3) {
		printf("YES");
	}
	else {
		printf("NO");
	}
	return EXIT_SUCCESS;
}