#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file
 * @letters: number of letters printed from that file
 *
 * Return: number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t len_r, len_w;
	char *buffer;

	if (filename == NULL)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(f);
		return (0);
	}
	len_r = read(f, buffer, letters);
	close(f);
	if (len_r == -1)
	{
		free(buffer);
		return (0);
	}
	len_w = write(STDOUT_FILENO, buffer, len_r);
	free(buffer);
	if (len_r != len_w)
		return (0);
	return (len_w);
}
