#ifndef BUILTINS_H
#define BUILTINS_H

#include "general.h"
#include "text.h"
#include "memory.h"

/* builtins.c */
int builtins(general_t *info, char **arguments);
int check_builtin(general_t *info, char **arguments);

/* exit.c */
void bin_exit(general_t *info, char **arguments);

#endif /* BUILTINS_H */