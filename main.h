#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <limits.h>

extern char **environ;

char **_strtok(char *line);
void prompt(void);
void signal_handler(int signo);
char *read_line(void);
int execute(char **tokens);
void display_env(void);
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
char *_getenv(const char *name);

#endif /*_MAIN_H_*/
