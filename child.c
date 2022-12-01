#include "shell.h"

/**
 * child - A function that create a subproces.
 * @command: The pointer to the tokenized command
 * @name: The pointer to the name of shell.
 * @env: The pointer to the enviromental varioables.
 * @cicles: Numbers of executed cicles.
 * Return: Nothing
 *
 */

void child(char **command, char *name, char **env, int cicles)
{
	int pid = 0;
	int status = 0;
	int wait_error = 0;

	pid = fork();
	if (pid < 0)
	{
		perror ("Error: ");
		free_exit(command);
	}
	else if (pid == 0)
	{
		execute(command, name, env, cicles);
		free_dp (command);
	}
	else
	{
		wait_error = waitpid(pid, &status, 0);
		if (wait_error < 0)
		{
			free_exit(command);
		}
		free_dp(commond);
	}
}

/**
 *
 *Funcion para copia del dierectorio usar _getcwd (permitido)
 *
 *
 *
 *
 *
 *
 */





