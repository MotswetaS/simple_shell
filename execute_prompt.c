#include "shell.h"

/*
 * carry_command - this function Forks a proces to execute a command
 * command - represents the spring to be executed
 *
 * Return: 0 or null
 */

void carry_command(const char *command)
{
	pid_t child_pid = fork();

	if (child_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);

	} else if (child_pid == 0)
	{
		execlp(command, command, (char *)NULL);
		perror("execlp");
		exit(EXIT_FAILURE);
	} else
	{
		wait(NULL);

	}
}
