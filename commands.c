#include "commands.h"
#include "text.h"

/**
 * analyze - Analyze	the arguments
 *
 * @arguments: Commands and arguments to execute
 **/
void analyze(char **arguments)
{
	char *cmd;
	int status;

	if (*arguments == NULL || arguments == NULL)
		return;

	cmd = arguments[0];

	status = is_file(cmd);
	if (status == -1)
		return;

	if (status == 1)
		execute(cmd, arguments);
	else
		execute(cmd, arguments);
}

