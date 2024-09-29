#include <iostream>

int main(int argc, char* argv[])
{
	short int h = 0;
	short int a = 0;
	short int b = 0;
	scanf_s("%hd %hd %hd", &h, &a, &b);
	short int h_a = h - a;
	short int a_b = a - b;
	printf("%hd", ((h_a * ((2 * h_a + 1) % 2) + h_a) / 2 + a_b - 1) / a_b + 1);
	return EXIT_SUCCESS;
}