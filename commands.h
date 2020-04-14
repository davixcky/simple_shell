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
void analyze(char **arguments, general_t *info, char *buff);

/* permissions.c */
int is_executable(char *filename);
int is_file(char *command);

/* environment.c */
char *_getenv(const char *name);
char *which(char *filename);

/* execute.c */
void execute(char *commands, char **arguments, general_t *info, char *buff);

#endif /* COMMANDS_H */
