#include <stdio.h>
#include <fcntl.h>
#include "libft.h"

int	main(void)
{
	int fd = open("test.txt", O_CREAT | O_TRUNC | O_RDWR, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		printf("Error opening the file\n");
		return (1);
	}
	char *s = "42 is the answer.";
	char buffer[18];
	ft_putstr_fd(s, fd);
	lseek(fd, 0, SEEK_SET);
	ssize_t bytes_read = read(fd, &buffer, 17);
	buffer[17] = '\0';
	if (bytes_read == -1)
	{
		printf("Error reading the file\n");
		return (1);
	}
	printf("Written to file: %s\n", buffer);
	close(fd);
	return (0);
}