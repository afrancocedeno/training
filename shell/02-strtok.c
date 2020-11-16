#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* char _strtok(char *str, const char *delim); */
/**
 * _strtok - .
 *
 * Return: pointer.
 */

/* copiar en ese espacio solicitado el contenido del string */
/* malloc devuelve un puntero, por lo tanto si tienes varias palabra lo que obtendras son varios punteros, eso lo tienes que alojar en algunas parte, se me ocurre crear un array con los punteros que te devuelve malloc */
/* char _strtok(char *str, const char *delim) */
int main(void)
{
	char *line = "hola mundo";
	char *delimiter = " ";
	int i = 0, j = 0;
	char *address = NULL;

	/* read string and count its length */
	for (;*(line + i) != *delimiter; i++)
		;
	printf("first string length is: %i\n",i);

	/* ask for memory allocation for token */
	address = malloc(i*sizeof(char));

	/* copy the first token in memory space */
	for (; j < i; j++)
		*(address + j) = *(line + j);
	printf("first token in memory is: %s\n", address);
	return (0);
}
/**
 * main - entry point function that separate a line by tokens.
 *
 * Return: 0 for succes.
 */
/* int main(void)
{
	char pointer[] = "Hola mundo";
	char *token = NULL;

	token = _strtok(pointer, " ");
	printf("%s\n", token);
	return (0);
} */
