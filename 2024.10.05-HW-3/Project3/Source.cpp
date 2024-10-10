#include <stdio.h>

int main(int argc, char* argv[]) {
	int k = 0;
	scanf_s("%d", &k);
	for (int i = 0; i < k; ++i) {
		int h = 0;
		scanf_s("%d", &h);
		if (h <= 437) {
			printf("Crash %d", i + 1);
			break;
		}
		else if(i == k - 1)
			printf("No crash");
	}
	return 0;
}