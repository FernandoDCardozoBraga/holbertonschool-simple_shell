#ifndef _SHELL_H_
#define _SHELL_H_
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

/*============     Shell_Init  ==============*/

int main(int ac, char **av, char **env);
void prompt(void);
void handle(int signals);
void _EOF(char *buffer);
void shell_exit(char **command);

/*============     child       ==============*/

void child(char **command, char *name, char **env, int cicles);
int change_dir(const char *path);

/*============     xxxxx       ==============*/


/*============        END      ==============*/

#endif /* _SHELL_H_ */
