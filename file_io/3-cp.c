#include "main.h"
/**
* main - copies contents of a file to another file
* @ac: number or arguments passed to command line
* @av: array of strings containing arguments passed to command line
* Return: 0 if success
*/
int main(int ac, char *av[])
{
	int fdFrom, fdTo, readBytes = 1024, writeBytes, closeFdFrom, closeFdTo;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}
	fdFrom = open(av[1], O_RDONLY);
	if (fdFrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fdTo = open(av[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (fdTo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while (readBytes == 1024)
	{
		readBytes = read(fdFrom, buf, 1024);
		if (readBytes < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		writeBytes = write(fdTo, buf, readBytes);
		if (writeBytes < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	closeFdFrom = close(fdFrom);
	closeFdTo = close(fdTo);
	if (closeFdFrom < 0 || closeFdTo < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdFrom);
		exit(100);
	}
	return(0);
}
