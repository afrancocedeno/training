/* .hs that includes constain getline funciton */
#define _GNU_SOURCE
#include <stdio.h>
/* .h that includes constan POSIX: STDOUT_FILENO */
#include <unistd.h>

int main(void)
{
	char *prompt = "($) ", *line = NULL;
	int string_length(char *str);
	/* char ammount will cointain the number of chars by getline */
	ssize_t char_ammount = 0;
	size_t line_size = 0;

	while (char_ammount != EOF)
	{	/* STDOUT_FILENO is a POSIX const, with value int 1, for standar output */
		write(STDOUT_FILENO, prompt, string_length(prompt));
		/* from the place we want to get the line, from screen, so stdin, otherwise stdout ptints nothing*/
		char_ammount = getline(&line, &line_size, stdin);
		write(STDOUT_FILENO, line, char_ammount);
	}
	return (0);
}

/**
 * string_length: funcitons that claculate the lenght of a string.
 * @str: input string.
 *
 * Return: the lenght of the string.
 */
int string_length(char *str)
{
        int i = 0;

        for (; *(str + i); i++)
                ;
        return(i);
}
