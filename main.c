#include "main.h"

/**
 * main - simple shell
 *
 * Return: 1
 */
int main(void)
{
	char *input;
	char **token;
	int x;

	while (1)
	{
		prompt();

		input = read_line();

		if (input[0] == '\0')
		{
			free(input);
			continue;
		}
		token = _strtok(input);
		if (_strcmp(token[0], "env") != 0)
			x = execute(token);

		if (x != 0)
		{
			free(input);
			exit(EXIT_FAILURE);
		}

		free(input);
	}
	return (0);
}

/**
 * prompt - displays prompt and waits for input
 *
 * Return: VOID
 */
void prompt(void)
{
	char *prompt = "$ ";

	write(STDOUT_FILENO, prompt, _strlen(prompt));
}
