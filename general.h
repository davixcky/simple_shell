#ifndef GENERAL_H
#define GENERAL_H

#define STDIN            0
#define STDOUT           1
#define STDERR           2

#define NON_INTERACTIVE  0
#define INTERACTIVE      1

#define PERMISSIONS      1
#define NON_PERMISSIONS  -1

#define _FILE            1
#define NON_FILE         0

typedef struct __attribute__((__packed__))
{
	int argc;
	char **argv;
	int mode;
} general_t;

#endif /* GENERAL_H */
