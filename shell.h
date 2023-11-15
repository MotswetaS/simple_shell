#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <sys/types.h>
#include <errno.h>
#include <sys/wait.h>
#include <limits.h>
#include <sys/stat.h>

void dispose_prompt(void);
void my_shell_write(const char *my_write);
void carry_command(const char *command);
void study_command(char *command, size_t size);

#endif
