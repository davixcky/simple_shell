#ifndef COMMANDS_H
#define COMMANDS_H

#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <errno.h>

#include "general.h"
#include "text.h"
#include "error.h"

extern char **environ;

/* commands.c */
void analyze(char **arguments, general_t *info);

/* permissions.c */

int is_file(char *command);

/* environment.c */
char *_getenv(const char *name);

/* execute.c */
void execute(char *commands, char **arguments);

#endif /* COMMANDS_H */
