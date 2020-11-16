#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - entry point function that separate a line by tokens.
 *
 * Return: 0 for succes.
 */
/*char _strtok(,);*/
int main(void)
{
	char pointer[] = "Hola mundo";
	char *token = NULL;

	token = strtok(pointer, " ");
	printf("%s\n", token);
	return (0);
}
