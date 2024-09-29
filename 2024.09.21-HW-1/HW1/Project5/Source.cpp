#include <iostream>

int main(int argc, char* argv[])
{
	short int a = 0;
	scanf_s("%hd", &a);
	printf("The next number for the number %hd is %hd.\n", a, a + 1);
	printf("The previous number for the number% hd is% hd.\n", a, a - 1);
	return EXIT_SUCCESS;
}