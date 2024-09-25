#include <iostream>

int main(int argc, char* argv[])
{
	short int h, a, b;
	scanf_s("%hd %hd %hd", &h, &a, &b);
	short int h_a = h - a;
	short int a_b = a - b;
	printf("%hd", ((h_a * ((2 * h_a + 1) % 2) + h_a) / 2 + a_b - 1) / a_b + 1);
	return EXIT_SUCCESS;
}