#include "main.h"

/**
 * main - simple shell
 *
 * Return: 1
 */
int main(void)
{
	char *user_input;
	char *argv[] = {"/bin/ls", "-l", ".", NULL};
	char **tokens;
	int x;

	while (1)
	{
		prompt();

		user_input = read_line();

		if (user_input[0] == '\0')
		{
			free(user_input);
			continue;
		}


		if (_strcmp(argv[0], "env") != 0)
			x = execute(argv);

		if (x != 0)
		{
			free(user_input);
			exit(EXIT_FAILURE);
		}

		free(user_input);
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
	char *prompt = "Shell ";

	write(STDOUT_FILENO, prompt, _strlen(prompt));
}
