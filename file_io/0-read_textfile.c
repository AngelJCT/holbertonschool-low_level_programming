#include "main.h"
#include <stdlib.h>
/**
 *read_textfile-function to read and write a textfile
 *@filename: pointer to text file
 *@letters: number of letters
 *Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fileopen, filewrite, fileread;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		return (0);
	}
	fileopen = open(filename, O_RDONLY);
	fileread = read(fileopen, buf, letters);
	filewrite = write(STDOUT_FILENO, buf, fileread);
	if (fileopen == -1 || filewrite == -1)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fileopen);
	return (filewrite);
}
