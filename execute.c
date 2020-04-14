#include "commands.h"
#include "general.h"

/**
 * execute - Execute a command in other process
 *
 * @command: Command to execute
 * @arguments: Arguments of the @command
 * @info: General info about the shell
 * @buff: Line readed
 **/
void execute(char *command, char **arguments, general_t *info, char *buff)
{
	char **tmp;

	if (fork() == 0)
	{
		execve(command, arguments, environ);
		perror("./sh");
		for (tmp = arguments; *tmp; ++tmp)
			free(*tmp);

		if (arguments != NULL)
			free(arguments);

		free(info->value_path);
		free(info);
		free(buff);
		exit(1);
	}
	else
	{
		wait(NULL);
	}
}

