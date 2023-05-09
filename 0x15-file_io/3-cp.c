#include "main.h"
/**
 * main - copies the content of a file to another file
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, other numbers on failure
 */
int main(int argc, char *argv[])
{
	int file_to, file_from, r, w, c;
	char *buffer;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n"
		, argv[1]), exit(98);
	buffer = malloc(1024);
	r = read(file_from, buffer, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while (r > 0)
	{
		w = write(file_to, buffer, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		r = read(file_from, buffer, 1024);
		if (r == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n"
			, argv[1]), free(buffer), exit(98);
	}
	c = close(file_from);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		free(buffer);
		exit(100);
	}
	c = close(file_to);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		free(buffer);
		exit(100);
	}
	free(buffer);
	return (0);
}
