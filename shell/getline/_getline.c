#define  _GNU_SOURCE
#include <stdio.h>

ssize_t getline(char **lineptr, size_t *n, FILE *stream)
{
	/* **lineptr: bufferr; *n: size; *stream: stdin. */
	/*address of the buffer containing the text */
	/* buffer is NULL terminated and includes newline */
	/* guard - if getline failed, lineptr is NULL and n is 0 free buffer */
	/* if biffer isn´t large enought, realloc */
}
	