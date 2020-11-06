#include <stdio.h>

/**
 * main - entry point funcion.
 *
 * Return: 0 for succes.
 */
int main(void)
{
	int a, b, c;

	a = 1 & 0;
	b = 1 & 1;
	c = 0 & 0;
	printf("Result: %d\n", a);
	printf("Result: %d\n", b);
	printf("Result: %d\n", c);

	return (0);
}
