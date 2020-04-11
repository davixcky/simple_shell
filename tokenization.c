#include "text.h"

/**
 * split_words - Split a line into words
 *
 * @line: Line to spli
 * @sep: Delimiters for split the words
 *
 * Return: Set of words
 **/
char **split_words(char *line, const char *sep)
{
	char **words, **tmp, *token;
	size_t n;

	words = malloc(sizeof(char *));
	if (words != NULL)
	{
		n = 1;
		token = strtok(line, sep);
		while (token)
		{
			tmp = realloc(words, (n + 1) * sizeof(char *));
			if (tmp == NULL)
				break;

			words = tmp;
			++n;

			words[n - 2] = malloc(strlen(token) + 1);
			if (words == NULL)
			{
				free(tmp);
				free(words);
			}

			if (words[n - 2] != NULL)
				strcpy(words[n - 2], token);

			token = strtok(NULL, sep);

			tmp = NULL;
		}

		words[n - 1] = NULL;
	}

	return (words);
}

