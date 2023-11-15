#include "shell.h"

/*
 * main - this is the main function of the program
 *
 * Description: it runs a continuous loop an calls  function
 *
 * Return: always return 0
 */

int main(void)
{
	char command[135];

	while (1)
	{
		dispose_prompt(); /*displays shell prompt to user*/
		carry_command(command); /*executes user command*/
		study_command(command, sizeof(command)); /*processes and also analyse code*/
	}
	return (0);
}
