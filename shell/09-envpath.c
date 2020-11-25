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

	for (; (strtok(*(environ + j), "=") + i) != NULL; j++)
	{
		printf("[%d] : ", j);
		for (; *(strtok(*(environ + j), "=") + i) != '\0'; i++)
			if (*(strtok(*(environ + j), "=") + i) == *(env_var + i))
			{
				printf("%c", *(strtok(*(environ + j), "=") + i));
			}
		printf("\n");
		i = 0;
	}
	return (0);
}
	/* 1. tokenizar con "=" PATH = __rutas__ > *(strtok(*(environ + j), "=") + i)*/
	/* 2. identificar PATH en doble puntero **env */
	/* 3. tokenizar string resultante con ":"" separando rutas */
	/* 4. identificar segundo token "__rutas__" */
	/* 5. identificar la ruta solicitada */
