#include "main.h"

/**
 * _strtok - split a string into a series of tokens
 * @line: input
 * Return: array of tokens
 */
char **_strtok(char *line)
{
	int i = 0;
	char **token = (char **)malloc(1024 * sizeof(char *));

	token[i] = strtok(line, " ");
	while (token[i])
	{
		token[i + 1] = strtok(NULL, " ");
		i++;
	}
	token[i] = NULL;

	if (_strcmp(token[0], "exit") == 0)
	{
		free(line);
		exit(EXIT_SUCCESS);
	}

		if ((_strcmp(token[0], "env") == 0) && token[1] == NULL)
		display_env();

	return (token);
}

/**
 * display_env - displays environment variables
 *
 * Return: VOID
 */
void display_env(void)
{
	unsigned int i = 0;

	while (environ[i])
	{
		write(STDOUT_FILENO, environ[i], _strlen(environ[i]));
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
}
