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
	printf("%s\n", environ[24]);
	printf("%s\n", strtok(environ[24], "="));

	/* identificar PATH en doble puntero **env */
	/* tokenizar con "=" PATH = __rutas__ */
	/* identificar segundo token "__rutas__" */
	/* tokenizar string resultante con ":"" separando rutas */
	/* identificar la ruta solicitada */
	return (0);
}