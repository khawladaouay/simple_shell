#include "main.h"

/**
 * execute - executes a command
 * @tokens: testing
 * Return: 0
 */
int execute(char **tokens)
{
	pid_t child;
	int status;
	char *argv[] = {"/bin/ls", "-l", ".", NULL};

	child = fork();
	if (child == 0)
	{
		if (execve(argv[0], argv, NULL) == -1)
		{
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
