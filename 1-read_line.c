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

	/** prints $ and waits for a user **/
	write(STDERR_FILENO, "$ ", 2);

	/** reading the line **/
	nb_line_read = getline(&line, &bufsize_len, stdin);

	/** checking th return value of the line **/
	if (nb_line_read > 0)
		write(STDOUT_FILENO, line, nb_line_read);
	else
		write(STDOUT_FILENO, "\n", 1);

	free(line);

	/** if reading the line fails **/
	if (nb_line_read == -1)
		return (EXIT_FAILURE);

	return (EXIT_SUCCESS);
}
