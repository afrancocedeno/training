#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(void)
{
	char *line, *prompt = "($)";
	size_t line_size = 0;
	int characters_read = 0;

	/* code */
	while (1)
	{
		write(STDOUT_FILENO, prompt, strlen(prompt));
		characters_read = getline(&line, &line_size, stdin);
		write(STDOUT_FILENO, line, characters_read);
	}
	return (0);
}