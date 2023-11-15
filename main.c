#include "shell.h"

/*
 * main - this is the main function of the program
 *
 * Description: loop that runs a function
 *
 * Return: 0
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
