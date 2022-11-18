#include "main.h"
#include <string.h>
/**
 *create_file-function to create a file with text
 *@filename: name of the file to be created
 *@text_content: string to be written
 *Return: file created with string
 */
int create_file(const char *filename, char *text_content)
{
	int fileopen, filewrite, len = strlen(text_content);

	if (filename == NULL)
	{
		return (-1);
	}

	fileopen = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	filewrite = write(fileopen, text_content, len);

	if (fileopen == -1 || filewrite == -1)
	{
		return (-1);
	}

	close(fileopen);
	return (1);
}
