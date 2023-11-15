#include "shell.h"

/*
 * my_shell_write - this function writes characters as string to terminal
 *
 * my_write - pointer
 */

void my_shell_write(const char *my_write)
{
	write(STDOUT_FILENO, my_write, strlen(my_write));
}
