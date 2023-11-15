#include "shell.h"

/* 
 * Function: study_command
 * This function reads andprocesses commands
 * command - character
 * size: max size of command
 * also handles errors on the terminal
 */

void study_command(char *command, size_t size)
{
	if (fgets(command, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			my_shell_write("\n");
			exit(EXIT_SUCCESS);
		} else
		{
			my_shell_write("Error whilst reading input.\n");
			exit(EXIT_FAILURE);
		}
	}
}
