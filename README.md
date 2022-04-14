## Description:
This project is a part of the curriculum of software engineering for the low-level programming module at Holberton School.  <br />
This program runs a simple shell. This shell will execute the most basic commands present in the bash shell.
## Returns:
When successfully compiled, the users prompt will be sent to search the matching command line that is meant to be executed and if said command has no matches it returns an error

## Function Prototypes:
char **_strtok(char *line);  <br />
void prompt(void);  <br />
void signal_handler(int signo);  <br />
char *read_line(void);  <br />
int execute(char **token);  <br />
int _strlen(char *s);  <br />
int _strcmp(char *s1, char *s2);  <br />
void display_env(void);  <br />

## Compilation:
All files will be compiled with the following: gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c main.h -o shell
## Command Line Examples:
/bin/ls - lists all files in current working directory  <br />
/bin/ls -l - lists all files in current working directory in long format
##Builtins
env - Displays the environment <br />
exit - For user to use whenever they desire to exit out of shell <br />

## Files
* README.md: Current file containing information about this project
* main.h - Header file that contains all library and prototype functions
* main.c - The simple shell itself and its main
* read_line.c - Function that gets input from user to match correct output
or prints an error message
* test.c - Function that tokenizes whatever read_line.c retrieved
* execute.c - Function that forks pid along with its child process
* func.c - File that contains all frunctions for basic use
## Authors:

Farouk Ben Miled <br />
Khaoula Daouay 

