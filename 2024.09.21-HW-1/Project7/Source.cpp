#include <iostream>

int main(int argc, char* argv[])
{
	int v = 0;
	int t = 0;
	scanf_s("%d %d", &v, &t);
	printf("%d", ((109 + v * t % 109) % 109) + 1);
	return EXIT_SUCCESS;
}
