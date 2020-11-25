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
	int i = 0, j = 0;

	

	/*for (; *(environ + i); i++)
	{
		for (; *(strtok(*(environ + i), "=") + j) || *(env_var + j); j++)
		{
			if (*(strtok(*(environ + i), "=") + j) != *(env_var + j))
			{
				continue;
				printf("is different at: [%i]\n", i);
			}
			else
			{
				printf("I found it at: [%i]\n", i);
			}
		}
	}*/

	printf("%s\n", strtok(environ[25], "="));

	printf("%c\n", *(strtok(*(environ + 25), "=") + 1));

	/* identificar PATH en doble puntero **env */
	/* tokenizar con "=" PATH = __rutas__ */
	/* identificar segundo token "__rutas__" */
	/* tokenizar string resultante con ":"" separando rutas */
	/* identificar la ruta solicitada */
	return (0);
}