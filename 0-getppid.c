#include <stdio.h>
#include <unistd.h>

/**
 * main - prints the PID of the parent process.
 *
 * Return: 0
 */
int main(void)
{
	printf("%u\n", getppid());

	return (0);
}
