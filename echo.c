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

			echo_printer(i, tmp, arguments);
			free_memory_p((void *) tmp);

			continue;
		}

		echo_printer(i, arguments[i], arguments);
	}

	info->status_code = 0;
}

void echo_printer(int i, char *text, char **arguments)
{
	print(text);

	if (arguments[i + 1] != NULL)
		_putchar(' ');
	else
		_putchar('\n');
}

