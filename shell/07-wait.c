#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int process_id = fork(), number = 0, i = 0;

	if (process_id == 0)
	{
		number = 1;
		printf("pid: %d\n", process_id);
	}
	else if (process_id != 0)
	{
		number = 6;
		wait(NULL);
		printf("pid: %d\n", process_id);
	}
	for (i = number; i < number + 5; i++)
	{
		printf("iterator : %d\n", i);
		fflush(stdout);
	}
	return (0);
}