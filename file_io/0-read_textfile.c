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
	ssize_t f_output, w;

	if (filename == NULL)
	{
		return (0);
	}
	f_output = open(filename, O_RDONLY);
	w = write(STDOUT_FILENO, filename, letters);
	if (f_output == -1 || w == -1)
	{
		return (0);
	}
	close(f_output);
	return (w);
}
