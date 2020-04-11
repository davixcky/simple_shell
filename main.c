#include "shell.h"
#include <unistd.h>

/**
 * main - Entry point of the shell
 *
 * Return: 0 on success and 1 on error
 **/
int main(int argc, char **argv)
{
	(void) argc;
	(void) argv;

	start(isatty(STDIN) == INTERACTIVE);

	return (0);
}

