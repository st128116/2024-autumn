#include <iostream>

int main(int argc, char* argv[]) {
	int l1 = 0;
	scanf_s("%d", &l1);
	int w1 = 0;
	scanf_s("%d", &w1);
	int h1 = 0;
	scanf_s("%d", &h1);

	int l2 = 0;
	scanf_s("%d", &l2);
	int w2 = 0;
	scanf_s("%d", &w2);
	int h2 = 0;
	scanf_s("%d", &h2);

	int lc = 0;
	scanf_s("%d", &lc);
	int wc = 0;
	scanf_s("%d", &wc);
	int hc = 0;
	scanf_s("%d", &hc);

	bool z0 = l1 <= wc && l2 <= wc && w1 <= lc && w2 <= lc && h1 + h2 <= hc;
	bool z1 = l1 <= lc && l2 <= lc && w1 <= wc && w2 <= wc && h1 + h2 <= hc;
	bool z2 = l1 <= lc && l2 <= lc && h1 <= hc && h2 <= hc && w1 + w2 <= wc;
	bool z3 = h1 <= hc && h2 <= hc && w1 <= wc && w2 <= wc && l1 + l2 <= lc;
	bool z4 = l1 <= wc && h2 <= hc && h1 <= hc && w2 <= wc && w1 + l2 <= lc;
	bool z5 = h1 <= hc && l2 <= wc && w1 <= wc && h2 <= hc && l1 + w2 <= lc;
	bool z6 = l1 <= lc && h2 <= hc && h1 <= hc && w2 <= lc && w1 + l2 <= wc;
	bool z7 = h1 <= hc && l2 <= lc && w1 <= lc && h2 <= hc && l1 + w2 <= wc;
	bool z8 = w1 <= lc && h2 <= hc && h1 <= hc && w2 <= lc && l1 + l2 <= wc;
	bool z9 = h1 <= hc && l2 <= wc && l1 <= wc && h2 <= hc && w1 + w2 <= lc;
	bool z10 = l1 <= lc && l2 <= wc && w1 <= wc && w2 <= lc && h1 + h2 <= hc;
	bool z11 = l1 <= wc && l2 <= lc && w1 <= lc && w2 <= wc && h1 + h2 <= hc;
	

	if (z0 || z1 || z2 || z3 || z4 || z5 || z6 || z7 || z8 || z9 || z10 || z11) {
		printf("YES");
	}
	else {
		printf("NO");
	}

	return EXIT_SUCCESS;
}