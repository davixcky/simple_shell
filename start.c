#include "shell.h"
#include "text.h"

/**
 * start - Handle the mode
 * Description: Mode can be INTERACTIVE or NON_INTERACTIVE
 *
 * @mode: Type of shell to open
 **/
void start(int mode)
{
	start_prompt(mode);
}
