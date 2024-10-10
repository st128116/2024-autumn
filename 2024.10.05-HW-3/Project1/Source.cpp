#include <stdio.h>

int main(int argc, char* argv[]) {
	int n = 0;
	scanf_s("%d", &n);
	int orel_count = 0;
	int reshka_count = 0;
	for (int i = 0; i < n; ++i) {
		int side = 0;
		scanf_s("%d", &side);
		if (side == 0)
			++orel_count;
		else
			++reshka_count;
	}
	if (reshka_count < orel_count)
		printf("%d", reshka_count);
	else
		printf("%d", orel_count);
	return 0;
}