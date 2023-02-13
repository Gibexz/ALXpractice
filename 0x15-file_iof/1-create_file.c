#include "main.h"

int create_file(const char *filename, char *text_content)
{
	int fd, fdw, slen;

	if (text_content == NULL)
		text_content = "";
	if (filename == NULL)
		return (-1);
	slen = strlen(text_content);
	
	fd = open(filename, O_CREAT |O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	fdw = write(file, text_content, slen);
	if (fdw == -1)
		return (-1);
	close(fd);

	return (-1);

}
