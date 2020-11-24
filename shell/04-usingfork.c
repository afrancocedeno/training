/* libs for process functions -  fork */
#include <sys/types.h>
#include <unistd.h>
/* lib for std funcitons - printf */
#include <stdio.h>

/**
 * main - enry point function that is a process and his child.
 * one fork means message is going to be printed twice.
 *
 * Return: 0 for success.
 */
int main(void)
{
	int id = fork();

}
