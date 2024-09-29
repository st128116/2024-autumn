#include <iostream>

int main(int argc, char* argv[])
{
	short int n = 0;
	short int a = 0;
	short int b = 0;
	scanf_s("%hd %hd %hd", &n, &a, &b);
	printf("%hd", n * a * b * 2);
	return EXIT_SUCCESS;
}