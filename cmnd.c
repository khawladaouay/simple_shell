#include "main.h"
/**
 * _exit - exit command
 * @args : command passed by the user
 * Return: exit command
 */
int _exit(char **args)
{
	exit(98);
}
/**
 * _env - function prints env variable
 * @args : command passed by the user
 * Return: print the enviroment variable
 */
void _env(char **args)
{
	int i;
	int len;

	for (i = 0; environ[i] != NULL; i++)
	{
		len = _strlen(environ[i]);
		write(1, environ[i], len);
		write(1, "\n", 1);
	}
}
