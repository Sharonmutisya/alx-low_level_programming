#include "main.h"

/**
 * append_text_to_file - Appends text at end of file.
 * @filename: Pointer to the name of file.
 * @text_content: String to add at the end of file.
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, d, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	a = open(filename, O_WRONLY | O_APPEND);
	d = write(a, text_content, len);

	if (a == -1 || d == -1)
		return (-1);

	close(a);
	return (1);
}
