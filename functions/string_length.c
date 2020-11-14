/**
 * string_lenght - function that return the length.
 *
 * Return: length number.
 */
int string_lenght(void)
{
	unsigned int i = 0;

	for (; *(string_pointer + i) != '\0'; i++)
		;
	return (i);
}