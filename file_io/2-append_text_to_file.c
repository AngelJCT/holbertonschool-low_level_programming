#include "main.h"
#include <string.h>
/**
 *append_text_to_file-function to append text at the end of a file
 *@filename: pointer to file
 *@text_content: text to be appended
 *Return: text appended into the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fileopen, filewrite, len;

	if (filename == NULL)
	{
		return (-1);
	}

	fileopen = open(filename, O_WRONLY | O_APPEND);

	if (text_content != NULL)
	{
		len = strlen(text_content);
		filewrite = write(fileopen, text_content, len);
	}

	if (fileopen == -1 || filewrite == -1)
	{
		return (-1);
	}

	close(fileopen);
	return (1);
}
