#include "error.h"
#include "general.h"
#include "text.h"

/**
 * message_selector - Select the message that match with the error_code
 *
 * @info: General information about the shell
 *
 * Return: Error message
 **/
char *message_selector(general_t info)
{
	int i, n_options;
	error_t messages[] = {
		{_ENOENT, 2},
		{_EACCES, 13},
		{_CMD_NOT_EXISTS, 132}
	};

	n_options = sizeof(messages) / sizeof(messages[0]);
	for (i = 0; i < n_options; i++)
		if (info.error_code == messages[i].code)
			return (messages[i].message);

	return ("");
}

/**
 * error - Print the error
 *
 * @info: General information about the shell
 **/
void error(general_t *info)
{
	char *message;
	char *number;
	char *aux;
	int size_number, size_message;

	number = NULL;
	message = message_selector(*info);
	number = to_string(info->n_commands);

	size_number = _strlen(number);
	size_message = _strlen(info->argv[0]);

	aux = malloc(size_message + size_number + 3);

	aux = _strcpy(aux, info->argv[0]);
	aux = _strcat(aux, ": ");
	aux = _strcat(aux, number);

	/* program: line [n]: command: message */
	message = join_words(aux, info->command, message, ": ");
	print_err(message);

	free(message);
	free(number);
	free(aux);
}

