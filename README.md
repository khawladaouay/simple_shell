## Description:
This project is a part of the curriculum of software engineering for the low-level programming module at Holberton School.  <br />
This program runs a simple shell. This shell will execute the most basic commands present in the bash shell.
## Returns:
When successfully compiled, the users prompt will be sent to search the matching command line that is meant to be executed and if said command has no matches

## Function Prototypes:
char **_strtok(char *line);  <br />
void prompt(void);  <br />
void signal_handler(int signo);  <br />
char *read_line(void);  <br />
int execute(char **token);  <br />
void display_env(void);  <br />
int _strlen(char *s);  <br />
int _strcmp(char *s1, char *s2);  <br />

## Compilation:
All files will be compiled with the following: gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c main.h -o shell
## List of commands available
/bin/ls - lists all files in current working directory  <br />
/bin/ls -l - lists all files in current working directory in long format

## Authors:

Farouk Ben Miled <br />
Khaoula Daouay 

