#include <stdio.h>

int main(int argc, char* argv[]) {
	int n = 0;
	scanf_s("%d", &n);
	int road_count = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			int sity_flag = 0;
			scanf_s("%d", &sity_flag);
			if (sity_flag && j >= i)
				++road_count;
		}
	}
	printf("%d", road_count);
	return 0;
}