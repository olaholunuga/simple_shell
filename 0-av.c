#include "unistd.h"
#include "stdio.h"

/**
 * main - prints all the arguments, without using ac
 * @ac: the number of items in av
 * @av: a NULL terminated array of strings
 *
 * Return: 0 at the end of the program
 */
int main(int ac __attribute__((unused)), char **av)
{
	unsigned int i;

	i = 0;

	while (av[i])
	{
		printf("%s\n", av[i]);
		i++;
	}
	return (0);
}
