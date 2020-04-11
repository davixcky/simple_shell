#include "commands.h"

/**
 * _getenv - Get a environment variable
 *
 * @name: Environment variable to get
 *
 * Return: On success value of @name
 * On error, NULL
 **/
char *_getenv(const char *name)
{

	char **env;
	char *aux, *token;
	int size, i;

	size = _strlen((char *) name);

	env = environ;

	for (; *env; ++env)
	{
		aux = *env;

		token = strtok(aux, "=");
		if (token == NULL)
			return (NULL);

		if (_strlen(token) != size)
			continue;

		for (i = 0; i < size; i++)
		{
			if (name[i] != aux[i])
				break;
			else if (name[i] == aux[i] && i == size - 1)
				return (strtok(NULL, "="));
		}

	}

	return (NULL);
}

