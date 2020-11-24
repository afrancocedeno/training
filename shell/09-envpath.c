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
	/* for (; environ[i] != NULL; i++) printf("[%i] : %s\n", i, environ[i]); */
	printf("%i\n", **environ);
/* identificar PATH en doble puntero **env */
/* tokenizar con "=" PATH = __rutas__ */
/* identificar segundo token "__rutas__" */
/* tokenizar string resultante con ":"" separando rutas */
/* identificar la ruta solicitada */
return (0);
}
