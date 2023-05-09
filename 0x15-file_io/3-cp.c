#include "main.h"
/**
 * create_buff - creates a buffer of 1024 bytes
 * @file: the name of the file to write to
 *
 * Return: pointer to the buffer
 */
char *create_buff(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}
/**
 * closing_files - closes a file
 * @fc: the file descriptor to close
 *
 * Return: nothing
 */

void closing_files(int fc)
{
	int c;

	c = close(fc);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fc);
		exit(100);
	}
}

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
	int file_to, file_from, r, w;
	char *buffer;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	buffer = create_buff(argv[2]);
	r = read(file_from, buffer, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while (r > 0)
	{
		w = write(file_to, buffer, r);
		if (w == -1 || file_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		r = read(file_from, buffer, 1024);
	}
		if (r == -1 || file_from == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

	free(buffer);
	closing_files(file_from);
	closing_files(file_to);
	return (0);
}
