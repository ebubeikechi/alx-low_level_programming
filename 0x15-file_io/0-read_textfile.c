#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - reads text and prints it to the standard output
 * @filename: name of the text file being read
 * @letters: num of letter to be read
 * Return: actual number of letters red and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	char *buffer;
	ssize_t file_open;
	ssize_t writ;
	ssize_t result;

	/* first open the file with read only permission*/
	file_open = open(filename, O_RDONLY);

	/*take care of the error*/
	if (file_open == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	result = read(file_open, buffer, letters);
	writ = write(STDOUT_FILENO, buffer, result);

	free(buffer);
	close(file_open);
	return (writ);

}
