#include "shell.h"

/*
 * Function - dispose_prompt
 * This function displays a shell prompt and calls it 'spoksshell$'
 * it insdicates that the shell is ready to take commands from user
 */

void dispose_prompt(void)
{

	my_shell_write("spoks_shell$");

}
