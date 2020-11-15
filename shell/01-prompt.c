/* .h that includes STDOUT_FILENO */
#include <unistd.h>
#include <stdio.h>

int main(void)
{
	char *prompt = "($) ";
	int string_length(char *str);

		write(STDOUT_FILENO, prompt, string_length(prompt));
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
