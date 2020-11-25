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
	/* tokenizar con "=" PATH = __rutas__ >>> *(strtok(*(environ + j), "=") + i)*/
	for (; *(strtok(*(environ + 25), "=") + i); i++)
		printf("PATH : %c; main : %c\n", *(strtok(*(environ + 25), "=") + i), *(env_var + i));
	/* identificar PATH en doble puntero **env */

	/* tokenizar string resultante con ":"" separando rutas */
	/* identificar segundo token "__rutas__" */
	/* identificar la ruta solicitada */
	return (0);
}