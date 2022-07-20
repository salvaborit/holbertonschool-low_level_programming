#include "main.h"
/**
* append_text_to_file - appends text at the end of a file
* @filename: name of file
* @text_content: NULL terminated string to append to file
* Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_APPEND);

	if (!filename || fd == -1)
		return (-1);
	if (text_content)
		write(fd, text_content, strlen(text_content));
	return (1);
}
