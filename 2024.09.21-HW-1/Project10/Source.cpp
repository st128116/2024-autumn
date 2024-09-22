#include <iostream>

int main(int argc, char* argv[])
{
	int a;
	scanf_s("%d", &a);
	printf("%d %d %d", a / 6, (a * 2) / 3, a / 6);
	return EXIT_SUCCESS;
}

// https://acmp.ru/asp/do/index.asp?main=task&id_course=1&id_section=1&id_topic=28&id_problem=150