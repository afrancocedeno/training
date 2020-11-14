/*malloc header*/
#include <stdlib.h>
/**
 * main - funciton that points to numbers from 1 to 100.
 *
 * Return: 0 succes.
 */
int main(void)
{
	/*pointer that will return the address of 100 numbers allocated in mamory*/
	int *pointer = NULL, i = 1;

	/*memory allocation*/
	pointer = malloc(sizeof(int)*100);
	if (pointer == NULL)
		return (1);

	/*initialize every single memory address with a number*/
	for (; i <= 100; i++)
		*(pointer + i - 1) = i;

	return (0);
}