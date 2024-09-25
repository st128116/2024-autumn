#include <iostream>

int main(int argc, char* argv[])
{
	int v, t;
	scanf_s("%d %d", &v, &t);
	printf("%d", ((109 + v * t % 109) % 109) + 1);
	return EXIT_SUCCESS;
}