#ifndef ERROR_H
#define ERROR_H

#include "general.h"
#include "text.h"

/* error.c */
char *message_selector(general_t info);
void error(general_t *info);

#endif /* ERROR_H */
