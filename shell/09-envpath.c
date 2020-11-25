#define _GNU_SOURCE /* environ headers */
#include <unistd.h>
#include <stdio.h>
#include <string.h> /* strok headers */
#include <stdlib.h>

char **tokens(char *str, const char *delimitador);

/**
 * main - entry point funciton.
 *
 * Return: 0 succes.
 */
int main(void)
{
	printf("%s\n", environ[24]);
	printf("%s\n", *tokens(environ[24], "="));
	/* identificar PATH en doble puntero **env */
	/* tokenizar con "=" PATH = __rutas__ */
	/* identificar segundo token "__rutas__" */
	/* tokenizar string resultante con ":"" separando rutas */
	/* identificar la ruta solicitada */
	return (0);
}

/**
 * tokens - function that tokenize the user instructions.
 * @str: global variable input with user line.
 * @delimitador: global variable input with string separator.
 *
 * Return: char** with array of tokens.
 */
char **tokens(char *str, const char *delimitador)
{
	char **array = NULL;
	int i, token = 0;

	/*contador de tokens*/
	for (i = 0; str[i] != '\0'; i++)
		if ((str[i] == 32 && str[i + 1] != 32) || str[i + 1] == '\0')
			token++;
	/*asignacion de memoria*/
	array = malloc((token + 1) * sizeof(char *));
	if (array == NULL)
		exit(-1);
	i = 0;
	/*primer llamado strtok*/
	array[i] = strtok(str, delimitador);
	for (i = 1; i < token ; i++)
		array[i] = strtok(NULL, delimitador);
	array[token] = NULL;
	return (array);
}