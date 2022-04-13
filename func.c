#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to be evaluated
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 1
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}

	else
	{
		return (*s1 - *s2);
	}
}


/**
 * _getenv - gets value of env var
 * @name: name of variable in env
 *
 * Return: NULL or value of env var
 */
char *_getenv(const char *name)
{
	char **envPtr;
	char *charPtr;
	const char *namePtr;

	for (envPtr = environ; *envPtr != NULL; envPtr++)
	{
		for (charPtr = *envPtr, namePtr = name; *charPtr == *namePtr; charPtr++, namePtr++)
		{
			if (*charPtr == '=')
				break;
		}
		if ((*charPtr == '=') && (*namePtr == '\0'))
			return (charPtr + 1);
	}
	return (NULL);
}


/**
 * av_error - prints perror with av[0]
 * @av: argument vector
 * Return: VOID
 */
void av_error(char **av)
{
	perror(av[0]);
}
