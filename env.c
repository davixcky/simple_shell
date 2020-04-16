#include "builtins.h"

void bin_env(general_t *info, char **arguments)
{
	(void) info;
	(void) arguments;

	get_full_env();
}
