#include "main.h"
/**
*signal_handler - a signal handler
*@signo: singal passed by the user
* Return: void
*/
void signal_handler(int signo)
{
	if (signo == SIGINT)
	{
		printf("\n");
	}
}
