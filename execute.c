#include "commands.h"

/**
 * execute - Execute a command in other process
 *
 * @command: Command to execute
 * @argument: Arguments of the @command
 **/
void execute(char *command, char **arguments)
{
	if (fork() == 0)
	{
		execve(command, arguments, environ);
		perror("./sh");
		free(arguments);
		exit(1);
	}
	else
	{
		wait(NULL);
	}
}

