#include "general.h"
#include "shell.h"

/**
 * main - Entry point of the shell
 *
 * @argc: Number of arguments received
 * @argv: Arguments received
 *
 * Return: 0 on success and 1 on error
 **/
int main(int argc, char **argv)
{
	(void) argc;
	(void) argv;

	general_t *info;

	info = malloc(sizeof(general_t));
	if (info == NULL)
	{
		perror(argv[0]);
		exit(1);
	}

	info->argc = argc;
	info->argv = argv;
	info->mode = isatty(isatty(STDIN) == INTERACTIVE);
	start(info);

	return (0);
}

