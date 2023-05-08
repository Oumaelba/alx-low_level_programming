#include "main.h"
/**
 * read_textfile - function description
 * @filename: file name
 * @letters: size of letters
 * Return: actual number of chars
 *
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int op, re, wr;
	char *buffer;

	buffer =  malloc(letters);
	if (buffer == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	re = read(op, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, re);
	if (op == -1 || re == -1 || wr == -1 || wr != re)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(op);
	return (re);
}
