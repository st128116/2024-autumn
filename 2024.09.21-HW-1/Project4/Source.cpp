#include <iostream>

int main(int argc, char* argv[])
{
	short int n, a, b;
	scanf_s("%hd %hd %hd", &n, &a, &b);
	printf("%hd", n * a * b * 2);
	return EXIT_SUCCESS;
}

// https://acmp.ru/asp/do/index.asp?main=task&id_course=1&id_section=1&id_topic=26&id_problem=145