#include "main.h"
/**
* read_textfile - reads a text file and prints to POSIX stdout
* @filename: name of file
* @letters: number of letters to read and print
* Return: number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bytes;
	char *buf;

	buf = malloc(sizeof(char) * letters);
	fd = open(filename, O_RDONLY);
	if (!filename || !buf || fd == -1)
		return (0);
	bytes = read(fd, buf, letters);
	write(STDOUT_FILENO, buf, letters);
	close(fd);
	return (bytes);
}
