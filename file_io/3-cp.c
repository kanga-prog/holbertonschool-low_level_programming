#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 * copy_file - copies the content of one file to another
 * @file_from: the source file to copy from
 * @file_to: the destination file to copy to
 *
 * Return: 0 on success, or exit on failure with an appropriate error code
 */
void copy_file(const char *file_from, const char *file_to);

/**
 * main - entry point of the program
 * @argc: number of arguments passed to the program
 * @argv: array of argument strings
 *
 * Return: 0 on success, or exits with appropriate error code
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);

	return (0);
}

/**
 * copy_file - copies content from one file to another
 * @file_from: the source file to copy from
 * @file_to: the destination file to copy to
 *
 * This function reads from file_from in chunks of 1024 bytes and writes
 * to file_to. It handles errors with specific exit codes.
 */
void copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to, bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	/* Open file_from for reading */
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	/* Open file_to for writing */
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
		close(fd_from);
		exit(99);
	}

	/* Read from file_from and write to file_to */
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		close(fd_from);
		close(fd_to);
		exit(98);
	}

	/* Close the file descriptors */
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		close(fd_to);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
}

