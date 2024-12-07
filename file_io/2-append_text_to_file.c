#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file.
 * @text_content: The content to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written, length = 0;

	/* Check if the filename is NULL */
	if (filename == NULL)
	{
		return (-1);
	}

	/* If text_content is not NULL, calculate its length */
	if (text_content != NULL)
	{
		while (text_content[length])
		{
			length++;
		}
	}

	/* Open the file in append mode */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1); /* Return -1 if the file cannot be opened */
	}

	/* Write the text_content to the file if it's not NULL */
	if (length > 0)
	{
		bytes_written = write(fd, text_content, length);
		if (bytes_written == -1)
		{
			close(fd);
			return (-1); /* Return -1 if writing fails */
		}
	}

	/* Close the file and return 1 on success */
	close(fd);
	return (1);
}

