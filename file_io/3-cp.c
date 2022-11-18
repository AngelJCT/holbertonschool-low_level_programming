#include "main.h"
#include <stdlib.h>
/**
 *main-function to copy a file to another file
 *@argc: count of arguments
 *@argv: array of arguments
 *Return: Always 0 success
 */
int main(int argc, char *argv[])
{
	int fd, fd2, ch;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file fd\n");
		exit(98);
	}
	fd2 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to fd2\n");
		exit(99);
	}
	while ((ch = read(fd, buffer, 1024)))
	{
		write(fd2, buffer, ch);
	}

	close(fd);
	close(fd2);
	if (close(fd) == -1 || close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd -1\n");
		exit(100);
	}
	return (0);
}

