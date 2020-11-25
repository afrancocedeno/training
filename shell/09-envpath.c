#define _GNU_SOURCE /* environ headers */
#include <unistd.h>
#include <stdio.h>
#include <string.h> /* strok headers */

/**
 * main - entry point funciton.
 *
 * Return: 0 succes.
 */
int main(void)
{
	char *env_var = "PATH";
	int i = 0;

	printf("from PATH: \n");
	for (; *(strtok(*(environ + 25), "=") + i); i++)
		printf("[%d] : %c\n", i, *(strtok(*(environ + 25), "=") + i));
	printf("from main: \n");
	for (i = 0; *(env_var + i) != '\0'; i++)
		printf("[%d] : %c\n", i, *(env_var + i));

	/* printf("%s\n", strtok(environ[25], "="));
	printf("%c\n", *(strtok(*(environ + 25), "=") + 1)); */

	/* identificar PATH en doble puntero **env */
	/* tokenizar con "=" PATH = __rutas__ */
	/* identificar segundo token "__rutas__" */
	/* tokenizar string resultante con ":"" separando rutas */
	/* identificar la ruta solicitada */
	return (0);
}