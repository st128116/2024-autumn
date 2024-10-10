#include <stdio.h>

int main(int argc, char* argv[]) {
	int n = 0;
	scanf_s("%d", &n);
	int max_age = 0;
	int max_age_num = 0;
	for (int i = 0; i < n; ++i) {
		int age = 0;
		scanf_s("%d", &age);
		int gender = 0;
		scanf_s("%d", &gender);
		if (gender && age > max_age) {
			max_age = age;
			max_age_num = i + 1;
		}
	}
	if (max_age) {
		printf("%d", max_age_num);
	}
	else
		printf("%d", -1);
	return 0;
}