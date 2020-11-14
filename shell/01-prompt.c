#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(void)
{
	char *line, *prompt = "($)";
	size_t line_size = 0;
	int characters_read = 0;

	/* code */
		write(STDOUT_FILENO, prompt, string_length(prompt));

	return (0);
}

int string_lenght(void)
{
		write(STDOUT_FILENO, prompt, strlen(prompt));
		characters_read = getline(&line, &line_size, stdin);
		write(STDOUT_FILENO, line, characters_read);
	}
	return (0);
}