#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Lit un fichier texte et l'affiche à la sortie standard
 * @filename: Le nom du fichier à lire.
 * @letters: Le nombre de lettres à lire et à afficher depuis le fichier.
 *
 * Description: Cette fonction ouvre un fichier en mode lecture seule, lit
 * un nombre spécifié de caractères du fichier et les affiche sur la sortie
 * standard. Si une erreur se produit (par exemple, si le fichier ne peut pas
 * être ouvert, si la lecture ou l'écriture échoue), elle retourne 0.
 * Elle retourne le nombre réel de caractères lus et affichés cas d'succès.
 *
 * Return: Le nombre réel de caractères lus et affichés, ou 0,cas d'erreur.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_written;
	char *buffer;


	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);

	return (bytes_written);
}

