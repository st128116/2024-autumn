#include <iostream>

int main(int argc, char* argv[])
{
	int a;
	scanf_s("%d", &a);
	int s = a / 100;
	int d = (a - s * 100) / 10;
	int e = a - s * 100 - d * 10;
	printf("%d", s + d + e);
	return EXIT_SUCCESS;
}

// https://acmp.ru/asp/do/index.asp?main=task&id_course=1&id_section=1&id_topic=27&id_problem=155