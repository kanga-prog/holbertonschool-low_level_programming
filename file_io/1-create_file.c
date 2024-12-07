#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

/**
 * create_file - Creates a file with the specified content.
 * @filename: The name of the file to create.
 * @text_content: The NULL-terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 *  -1 if filename is NULL or if there is an error during file creation
 *  or writing.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t length = 0, written;

	/* Check if filename is NULL */
	if (filename == NULL)
		return (-1);

	/* Open the file with O_CREAT, O_WRONLY and O_TRUNC flags */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1); /* Failed to open or create file */

	/* If text_content is not NULL, write the content to the file */
	if (text_content != NULL)
	{
		/* Calculate the length of text_content */
		while (text_content[length] != '\0')
			length++;

		/* Write the content to the file */
		written = write(fd, text_content, length);
		if (written == -1)
		{
			close(fd);
			return (-1); /* Write failed */
		}
	}

	/* Close the file descriptor */
	close(fd);

	return (1); /* Success */
}
