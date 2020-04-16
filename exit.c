#include "builtins.h"

/**
 * bin_exit - Implementation of the exit builtin
 * Description: Free all the memory used and
 * exit with the last status_code
 *
 * @info: Information about the shell
 * @arguments: Arguments received
 **/
void bin_exit(general_t *info, char **arguments)
{
	int status_code;

	status_code = info->status_code;

	free_memory_pp((void **) arguments);
	free_memory_p((void *) info->buffer);
	free_memory_p((void *) info->environment);
	free_memory_p((void *) info);

	exit(status_code);
}

