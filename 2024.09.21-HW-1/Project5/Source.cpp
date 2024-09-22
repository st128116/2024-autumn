#include <iostream>

int main(int argc, char* argv[])
{
	short int a;
	scanf_s("%hd", &a);
	printf("The next number for the number %hd is %hd.\nThe previous number for the number %hd is %hd.\n", a, a + 1, a, a - 1);
	return EXIT_SUCCESS;
}

// https://acmp.ru/asp/do/index.asp?main=task&id_course=1&id_section=1&id_topic=26&id_problem=152