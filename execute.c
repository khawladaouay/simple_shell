#include "main.h"

/**
 * execute - executes a command
 * @token: testing
 * Return: 0
 */
int execute(char **token)
{
	pid_t child;
	int status;

	child = fork();
	if (child == 0)
	{
		if (execve(token[0], token, NULL) == -1)
		{
			free(token);
			perror("not found");
			return (-1);
		}
		exit(EXIT_SUCCESS);
	}
	else
	{
		wait(&status);
	}

	return (0);
}
