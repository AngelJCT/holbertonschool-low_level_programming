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
	int fd, fd2, ch, close1, close2, filewrite;
	char *buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1 || argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd == -1 || argv[2] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((ch = read(fd, buffer, 1024)) != 0)
	{
		if (ch == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		filewrite = write(fd2, buffer, ch);
		if (filewrite == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	close1 = close(fd);
	close2 = close(fd2);
	if (close1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", close1);
		exit(100);
	}
	else if (close2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", close2);
		exit(100);
	}
	return (0);
}

