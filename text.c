#include "text.h"
#include "commands.h"
#include "general.h"

/**
 * prompt - Print the prompt
 *
 * @mode: If the mode is NON_INTERACTIVE dont print
 *
 **/
void prompt(int mode)
{
	if (mode == NON_INTERACTIVE)
		return;

	print("$ ");
}

/**
 * read_prompt - Read lines in the prompt
 *
 * Return: Buffer readed or NULL if EOF was found
 **/
char *read_prompt()
{
	char *buf;
	int res;
	size_t size;

	buf = NULL;

	res = getline(&buf, &size, stdin);

	if (res == EOF)
	{
		free(buf);
		return (NULL);
	}

	return (buf);
}

/**
 * start_prompt - Loop reading text
 *
 * @mode: Mode for start the shell
 *
 **/
void start_prompt(int mode)
{
	char *buff;
	char **arguments;
	char **tmp;

	while (1)
	{
		prompt(mode);

		buff = read_prompt();
		if (buff == NULL)
		{
			_putchar('\n');
			break;
		}

		if (buff[0] != '\n')
		{
			arguments = split_words(buff, " \t\n");
			print(arguments[0]);

			analyze(arguments);
			/* Free memory */
			for (tmp = arguments; *tmp; ++tmp)
				free(*tmp);

			if (arguments != NULL)
				free(arguments);
		}

		free(buff);
	}

}

