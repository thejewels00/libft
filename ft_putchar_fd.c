#include "libft.h"

void    ft_putchar_fd(char c, int fd)
{
        write(fd, &c, 1);
}/*
#include <fcntl.h>
#include <stdio.h>
int main()
{
	int fd = open("file.txt",O_RDWR);
	ft_putchar_fd('k',fd);
	close(fd);
	printf("%d", fd);
	return (0);
}*/	
