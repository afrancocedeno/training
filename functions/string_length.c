/* .h that includes NULL*/
#include <stdlib.h>

/**
 * string_lenght - function that return the length.
 *
 * Return: length number.
 */
int string_length(void)
{
	unsigned int i = 0;
	char *string_pointer = NULL;

	for (; *(string_pointer + i) != '\0'; i++)
		;
	return (i);
}
