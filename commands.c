#include "commands.h"
#include "general.h"
#include "text.h"
#include <errno.h>

/**
 * analyze - Analyze	the arguments
 *
 * @arguments: Commands and arguments to execute
 * @info: General information about the shell
 **/
void analyze(char **arguments, general_t *info)
{
	char *cmd;
	int status;

	if (*arguments == NULL || arguments == NULL)
		return;

	cmd = arguments[0];
	info->command = cmd;

	status = is_file(cmd);
	if (status == NON_PERMISSIONS)
	{
		info->error_code = _CODE_EACCES;
		error(info);
		return;
	}

	if (status == 1)
	{
		execute(cmd, arguments);
		return;
	}

	errno = 2;
	info->error_code = _CODE_CMD_NOT_EXISTS;
	error(info);

}

