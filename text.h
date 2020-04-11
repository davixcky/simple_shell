#ifndef TEXT_H
#define TEXT_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#include "general.h"

/* text.c */
void start_prompt(int mode);
void prompt(int mode);
char *read_prompt();

/* utils_text.c */
int _strlen(char *msg);

/* printers.c */
int _putchar_to_fd(char l, int fd);
int print_to_fd(char *msg, int fd);

/* printers_out.c */
int _putchar(char c);
int print(char *msg);

/* tokenization.c */
char **split_words(char *line, const char *sep);

#endif /* TEXT_H */
