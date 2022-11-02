#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output
 * @filename: file pointer
 * @letters: number of letters it should read and
 * print
 *
 * Return: actual number of letters it could read
 * and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0, bytes = 0, nbytes = 0;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));

	if (buf == 0)
		return (0);

	nbytes = read(fd, buf, letters);

	bytes = write(1, buf, nbytes);

	if (bytes == -1 || nbytes == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);

	return (bytes);
}
