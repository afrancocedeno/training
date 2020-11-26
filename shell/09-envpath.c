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
	char **var_keeper = NULL;
	int i = 0, j = 0, input_token_length = 0, env_token_length = 0;

	input_token_length = (int)strlen(env_var);
	env_token_length = (int)strlen(strtok(*(environ + 25), "="));

	for (; (*(environ + j) + i) != NULL; j++)
	{
		printf("[%d] : ", j);
		for (; *(env_var + i) != '\0'; i++)
			/* if ((*(strtok(*(environ + j), "=") + i) == *(env_var + i))) */
			if (environ[j][i] == 'P' && environ[j][i + 1] == 'A' && environ[j][i + 2] == 'T' && environ[j][i + 3] == 'H')
				**(var_keeper + i) = environ[j][i];
				printf("%c", *(*(environ + j)) + i);
		printf("\n");
		i = 0;
	}
	printf("%s\n", *var_keeper);
	return (0);
}
/* 1. identificar PATH en doble puntero **env */
/* 2. tokenizar con "=" PATH = __rutas__ > *(strtok(*(environ + j), "=") + i)*/
/* 3. tokenizar string resultante con ":"" separando rutas */
/* 4. identificar segundo token "__rutas__" */
/* 5. identificar la ruta solicitada con stat*/
/* 6. comando va a excecve con un / despues de ruta */
/* funcion comparar strings y retornar 0 si cumple y conservar index en funcion main. */
