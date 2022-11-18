#include "main.h"
#include <stdlib.h>
/**
 * cl_file-close descriptors function
 * @fd: file descriptors to close
 */
void cl_file(int fd)
{
	int cls;

	cls = close(fd);

	if (cls == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 *main-function to copy a file to another file
 *@argc: count of arguments
 *@argv: array of arguments
 *Return: Always 0 success
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, ch, filewrite;
	char *buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1 || argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd2 == -1 || argv[2] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((ch = read(fd1, buffer, 1024)) != 0)
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
	cl_file(fd1);
	cl_file(fd2);
	return (0);
}

