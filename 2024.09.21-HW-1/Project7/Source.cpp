#include <iostream>

int main(int argc, char* argv[])
{
	int v, t;
	scanf_s("%d %d", &v, &t);
	printf("%d", ((109 + v * t % 109) % 109) + 1);
	return EXIT_SUCCESS;
}

// https://acmp.ru/asp/do/index.asp?main=task&id_course=1&id_section=1&id_topic=27&id_problem=157