#include "main.h"
/**
*signal_handler - a signal handler
*@signo: singal passed by the user
* Return: void
*/
void signal_handler(int signo __attribute__((unused)))
{
	write(STDOUT_FILENO, "\n($) ", 5);
}
