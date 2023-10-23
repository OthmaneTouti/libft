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
	char c = 'O';
	char buffer;
	ft_putchar_fd(c, fd);
	lseek(fd, 0, SEEK_SET);
	ssize_t bytes_read = read(fd, &buffer, 1);
	if (bytes_read == -1)
	{
		printf("Error reading the file\n");
		return (1);
	}
	printf("Written to file: %c\n", buffer);
	close(fd);
	return (0);
}