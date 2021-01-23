/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <dmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 17:57:29 by dmilan            #+#    #+#             */
/*   Updated: 2021/01/23 12:44:20 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include <errno.h>

extern int errno;

void	test_strlen(void)
{
	printf("**********************************\n");
	printf("*  ft_strlen                     *\n");
	printf("**********************************\n");
	
	printf("Test: %s$\nOrig: %zu\nMine: %zu\n\n", "1234", strlen("1234"), ft_strlen("1234"));
	printf("Test: %s$\nOrig: %zu\nMine: %zu\n\n", "", strlen(""), ft_strlen(""));
	printf("Test: %s$\nOrig: %zu\nMine: %zu\n\n", "  ", strlen("  "), ft_strlen("  "));
}

void	test_strdup(void)
{
	printf("**********************************\n");
	printf("*  ft_strdup                     *\n");
	printf("**********************************\n");

	printf("Test \"hello\" string\n");
	printf("Orig: %s\n", strdup("hello"));
	printf("Mine: %s\n\n", ft_strdup("hello"));
}

void	test_strcpy(void)
{
	printf("**********************************\n");
	printf("*  ft_strcpy                     *\n");
	printf("**********************************\n");
	
	char *dest;
	char *dest2;
	char *src;
	dest = malloc(10);
	dest2 = malloc(10);
	src = malloc(10);
	src = strcpy(src, "hello,yo");
	printf("Orig: %s\n", strcpy(dest, src));
	printf("Mine: %s\n\n", ft_strcpy(dest2, src));
	free(dest);
	free(dest2);
	free(src);
}

void	test_strcmp(void)
{
	printf("**********************************\n");
	printf("*  ft_strcmp                     *\n");
	printf("**********************************\n");

	printf("Test: %s and %s$\nOrig: %d\nMine: %d\n\n", "a", "a", strcmp("a", "a"), ft_strcmp("a", "a"));
	printf("Test: %s and %s$\nOrig: %d\nMine: %d\n\n", "Lorem ipsum dolor st amet, consectetur adipiscing", "Lodsfsdfasdf", strcmp("Lorem ipsum dolor st amet, consectetur adipiscing", "Lodsfsdfasdf"), ft_strcmp("Lorem ipsum dolor st amet, consectetur adipiscing", "Lodsfsdfasdf"));
	printf("Test: %s and %s$\nOrig: %d\nMine: %d\n\n", "", "12345", strcmp("", "12345"), ft_strcmp("", "12345"));
	printf("Test: %s and %s$\nOrig: %d\nMine: %d\n\n", "1234", "", strcmp("1234", ""), ft_strcmp("1234", ""));
	printf("Test: %s and %s$\nOrig: %d\nMine: %d\n\n", "ab", "a", strcmp("ab", "a"), ft_strcmp("ab", "a"));
}

void	test_read(void)
{
	printf("**********************************\n");
	printf("*  ft_read                       *\n");
	printf("**********************************\n");

	char	*buf;
	int		fd;
	fd = open("Makefile", O_RDONLY);
	buf = malloc(10);
	printf("Reading 10 bytes from Makefile\n");
	read(fd, buf, 10);
	printf("Orig: %s\n", buf);
	ft_read(fd, buf, 10);
	printf("Mine: %s\n\n", buf);
	free(buf);
	close(fd);

	printf("Reading from unexisting fd\n");
	printf("Orig: %zd errno: %d\n", read(-23, buf, 10), errno);
	errno = 0;
	printf("Mine: %zd errno: %d\n", ft_read(-23, buf, 10), errno);
	write(1, "\n", 1);
}

void	test_write(void)
{
	printf("**********************************\n");
	printf("*  ft_write                      *\n");
	printf("**********************************\n");
	
	printf("Test: usual input\n");
	write(1, "Orig: test text\n", 17);
	ft_write(1, "Mine: test text\n", 17);
	write(1, "\n", 1);
	
	printf("Test: zero width\n");
	printf("%zd\n", write(-1, "Test", 0));
	printf("%zd\n", ft_write(-1, "Test", 0));
	write(1, "\n", 1);
	
	printf("Test: fd < 0\n");
	printf("Orig: %zd errno: %d\n", write(-1, "Test", 4), errno);
	errno = 0;
	printf("Mine: %zd errno: %d\n\n", ft_write(-1, "Test", 4), errno);
	
	printf("Test: negative width\n");
	printf("Orig: %zd errno: %d\n", write(1, "Test", -1), errno);
	errno = 0;
	printf("Mine: %zd errno: %d\n", ft_write(1, "Test", -1), errno);
	write(1, "\n", 1);
}

int		main(void)
{
	test_strlen();
	test_strcpy();
	test_write();
	test_strdup();
	test_read();
	test_strcmp();
	return (0);
}
