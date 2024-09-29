#include <iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	scanf_s("%d", &a);
	int s = a / 100;
	int d = (a - s * 100) / 10;
	int e = a - s * 100 - d * 10;
	printf("%d", s + d + e);
	return EXIT_SUCCESS;
}