#include <stdio.h>

int main(int argc, char* argv[]) {
	int n = 0;
	scanf_s("%d", &n);
	int count = 0;
	int max = 0;
	for (int i = 0; i < n; ++i) {
		int t = 0;
		scanf_s("%d", &t);
		if (t > 0) {
			++count;
			if (max < count) {
				max = count;
			}
		}
		else
			count = 0;
	}
	printf("%d", max);
	return 0;
}