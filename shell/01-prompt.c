/* .h that includes constan POSIX: STDOUT_FILENO */
#include <unistd.h>
#include <stdio.h>

int main(void)
{
	char *prompt = "($) ", *line = NULL;
	int string_length(char *str);
	/* char ammount will cointain the number of chars by getline */
	ssize_t char_ammount = 0;
	size_t line_size = 0;

		/* STDOUT_FILENO is a POSIX const, with value int 1, for standar output */
		write(STDOUT_FILENO, prompt, string_length(prompt));
		/* from the place we want to get the line, from screen, so stdin, otherwise stdout ptints nothing*/
		char_ammount = getline(&line, &line_size, stdin);

		write(STDOUT_FILENO, line, char_ammount);
		write(STDOUT_FILENO, line, string_length(line));
		write(STDOUT_FILENO, line, line_size);
		printf("\n");
		printf("chammnt: %lu\n", char_ammount);
		printf("strlen: %i\n", string_length(line));
		/* line_size is always 120, if not enoght it reallocs */
		printf("lsize: %lu\n", line_size);
	return (0);

/* master the strlen and the stdin */
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
