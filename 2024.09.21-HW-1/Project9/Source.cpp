#include <iostream>

int main(int argc, char* argv[])
{
	short int h, a, b;
	scanf_s("%hd %hd %hd", &h, &a, &b);
	printf("%hd", (((h - a) * ((2 * (h - a) + 1) % 2) + h - a) / 2 + a - b - 1) / (a - b) + 1);
	return EXIT_SUCCESS;
}

// https://acmp.ru/asp/do/index.asp?main=task&id_course=1&id_section=1&id_topic=28&id_problem=161