#include "main.h"
/**
* create_file - creates a file
* @filename: name of file
* @text_content: NULL terminated string to write to the file
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd; 


	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, S_IRUSR | S_IWUSR);
	if (!filename || fd == -1)
		return (-1);
	if (text_content)
		write(fd, text_content, strlen(text_content));
	return (1);
}
