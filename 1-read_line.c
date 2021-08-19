#include "unistd.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * main - prints "$ ", wait for the user to enter a command,
 * prints it on the next line.
 *
 * Return: the status of success or failure
 */
int main(void)
{
	char *line = NULL;
	size_t bufsize_len = 0;
	ssize_t nb_line_read;

	write(STDERR_FILENO, "$ ", 2);

	nb_line_read = getline(&line, &bufsize_len, stdin);
	
	if (nb_line_read > 0)
		write(STDOUT_FILENO, line, nb_line_read);
	else
		write(STDOUT_FILENO, "\n", 1);
	
	free(line);

	if (nb_line_read == -1)
		return (EXIT_FAILURE);

	return (EXIT_SUCCESS);
}
