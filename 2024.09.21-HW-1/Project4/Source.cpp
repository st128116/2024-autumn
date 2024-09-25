#include <iostream>

int main(int argc, char* argv[])
{
	short int n, a, b;
	scanf_s("%hd %hd %hd", &n, &a, &b);
	printf("%hd", n * a * b * 2);
	return EXIT_SUCCESS;
}