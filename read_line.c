#include "main.h"

/**
 * read_line - reads user input
 * Return: line
 */
char *read_line(void)
{
	int l = 0;
	size_t buffsize = 0;
	char *line = NULL;

	l = getline(&line, &buffsize, stdin);

	if (l == EOF)
	{
		free(line);
		exit(EXIT_SUCCESS);
	}

	line[l - 1] = '\0';

	return (line);
}
