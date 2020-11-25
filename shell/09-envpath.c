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

	/* 1. tokenizar con "=" PATH = __rutas__ > *(strtok(*(environ + j), "=") + i)*/
	while (*(strtok(*(environ + j), "=") + i))
	{
		for (; *(strtok(*(environ + j), "=") + i); i++)
		{
			if (*(strtok(*(environ + 25), "=") + i) != *(env_var + i))
			{
				j++;
				break;
			}
			else
				printf("PATH : %c; main : %c\n", *(strtok(*(environ + 25), "=") + i), *(env_var + i));
		}
	}
	return (0);
}
	/* 2. identificar PATH en doble puntero **env */
	/* 3. tokenizar string resultante con ":"" separando rutas */
	/* 4. identificar segundo token "__rutas__" */
	/* 5. identificar la ruta solicitada */
