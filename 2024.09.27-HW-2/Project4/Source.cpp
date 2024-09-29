#include <iostream>

void mini_sort(int *a, int *b, int *c) {
	int tmp = 0;
	if (*a > *b) {
		tmp = *a;
		*a = *b;
		*b = tmp;
	}
	if (*c < *b) {
		tmp = *c;
		*c = *b;
		*b = tmp;
	}
	if (*a > *b) {
		tmp = *a;
		*a = *b;
		*b = tmp;
	}
}

int main(int argc, char* argv[]) {
	int a1 = 0;
	scanf_s("%d", &a1);
	int b1 = 0;
	scanf_s("%d", &b1);
	int c1 = 0;
	scanf_s("%d", &c1);
	int a2 = 0;
	scanf_s("%d", &a2);
	int b2 = 0;
	scanf_s("%d", &b2);
	int c2 = 0;
	scanf_s("%d", &c2);
	mini_sort(&a1, &b1, &c1);
	mini_sort(&a2, &b2, &c2);
	if (a1 <= a2 && b1 <= b2 && c1 <= c2 && (a1 != a2 || b1 != b2 || c1 != c2)) {
		printf("The first box is smaller than the second one");
	}
	else if (a2 <= a1 && b2 <= b1 && c2 <= c1 && (a1 != a2 || b1 != b2 || c1 != c2)) {
		printf("The first box is larger than the second one");
	}
	else if (a1 == a2 && b1 == b2 && c1 == c2) {
		printf("Boxes are equal");
	}
	else {
		printf("Boxes are incomparable");
	}
	return EXIT_SUCCESS;
}