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
	int fileopen, filewrite;
	size_t len = strlen(text_content);

	if (filename == NULL)
	{
		return (-1);
	}

	text_content = malloc(sizeof(char));
	if (text_content == NULL)
	{
		return (0);
	}

	fileopen = open(filename, O_CREAT | O_WRONLY);
	filewrite = write(fileopen, text_content, len);

	if (fileopen == -1 || filewrite == -1)
	{
		free(text_content);
		return (-1);
	}

	free(text_content);
	close(fileopen);
	return (1);
}
