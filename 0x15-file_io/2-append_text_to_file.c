#include "main.h"
/**
 * _strlen - find string length
 * @str: string
 * Return: length
 */
int_strlen(char *str)
{
	int length;

	for (length = 0; str[length] != '\0'; length++)
		;
	
	return (length);
}

/**
 * append_text_to_file - append text if file exists
 * @filename: file
 * @text_content: content to be appended to file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descr;
	int n_wrote;

	if (!filename)
		return (-1);

	file_descr = open(filename, O_WRONLY | O_APPEND);
	if (file_descr == -1)
		return (-1);

	if (!text_content)
	{
		close(file_descr);
		return (1);
	}

	n_wrote = write(file_descr, text_content, _strlen(text_content));
	if (n_wrote == -1 || n_wrote != _strlen(text_content))
	{
		close(file_descr);
		return (-1);
	}

	close(file_descr);
	return (1);
}
