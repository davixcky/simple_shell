#include "builtins.h"
#include "commands.h"
#include "memory.h"
#include "text.h"
#include <unistd.h>

/**
 * bin_echo - Echo builtins
 *
 * @info: Information about the shell
 * @arguments: Arguments of the command
 **/
void bin_echo(general_t *info, char **arguments)
{
	int i;
	char *tmp;

	for (i = 1; arguments[i] != NULL; i++)
	{
		if (arguments[i][0] == '$')
		{
			if (arguments[i][1] == '?')
				tmp = to_string(info->status_code);
			else if (arguments[i][1] == '$')
				tmp = to_string(getpid());
			else
			{
				tmp = arguments[i];
				tmp = (tmp + 1);
				tmp = _getenv(tmp);

				if (tmp == NULL)
				{
					_putchar(' ');
					continue;
				}
			}

			print(tmp);
			free_memory_p((void *) tmp);

			_putchar((arguments[i + 1] != NULL) ? ' ' : '\0');
			continue;
		}


		print(arguments[i]);
	}

	_putchar('\n');
	info->status_code = 0;
}
