#ifndef GENERAL_H
#define GENERAL_H

#define STDIN            0
#define STDOUT           1
#define STDERR           2

#define NON_INTERACTIVE  0
#define INTERACTIVE      1

#define PERMISSIONS      1
#define NON_PERMISSIONS -1

#define _FILE            10
#define NON_FILE         -10

#define _ENOENT          "No such file or directory"
#define _EACCES          "Permission denied"
#define _CMD_NOT_EXISTS  "not found"

#define _CODE_ENOENT           3
#define _CODE_EACCES           13
#define _CODE_CMD_NOT_EXISTS   132

typedef struct __attribute__((__packed__))
{
	int argc;                 /* Number of arguments received */
	char **argv;              /* Arguments received */
	int mode;                 /* INTERACTIVE or NON_INTERACTIVE */
	int error_code;           /* Error code for error message */
	char *command;            /* Command to execute */
	int n_commands;           /* Number of commands executed */
} general_t;

typedef struct __attribute__((__packed__))
{
	char *message;
	int code;
} error_t;

#endif /* GENERAL_H */

