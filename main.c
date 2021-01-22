/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <dmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 17:57:29 by dmilan            #+#    #+#             */
/*   Updated: 2021/01/22 18:30:47 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"


void	test_strlen(void)
{
	printf("**********************************\n");
	printf("*  ft_strlen                     *\n");
	printf("**********************************\n");
	
	printf("Test: %s$\nOrig: %zu\nMine: %zu\n\n", "1234", strlen("1234"), ft_strlen("1234"));
	printf("Test: %s$\nOrig: %zu\nMine: %zu\n\n", "", strlen(""), ft_strlen(""));
	// Don't need check for NULL
	printf("Test: %s$\nOrig: %zu\nMine: %zu\n\n", "  ", strlen("  "), ft_strlen("  "));
}

void	test_strdup(void)
{
	printf("**********************************\n");
	printf("*  ft_strdup                     *\n");
	printf("**********************************\n");
	
	printf("Orig: %s\n", strdup("hello"));
	printf("Mine: %s\n", ft_strdup("hello"));
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
	printf("%s\n", strcpy(dest, src));
	printf("%s\n", ft_strcpy(dest2, src));
	free(dest);
	free(dest2);
	free(src);
	
}

void	test_strcmp(void)
{
	printf("**********************************\n");
	printf("*  ft_strcmp                     *\n");
	printf("**********************************\n");

	printf("Test: %s and %s$\nOrig: %d\nMine: %d\n\n", "a", "ab", strcmp("a", "ab"), ft_strcmp("a", "ab"));
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
	printf("%s\n", buf);
	ft_read(fd, buf, 10);
	printf("%s\n", buf);
	free(buf);
	close(fd);
}

void	test_write(void)
{
	printf("**********************************\n");
	printf("*  ft_write                      *\n");
	printf("**********************************\n");
	
	printf("Test: usual input\n");
	write(1, "Orig: function;\n", 17);
	ft_write(1, "Mine: function;\n", 17);
	write(1, "\n", 1);
	
	printf("Test: zero width\n");
	printf("%zd\n", write(-1, "Test", 0));
	printf("%zd\n", ft_write(-1, "Test", 0));
	write(1, "\n", 1);
	
	printf("Test: fd < 0\n");
	printf("%zd\n", write(-1, "Test", 4));
	printf("%zd\n", ft_write(-1, "Test", 4));
	write(1, "\n", 1);
	
}

int		main(void)
{
	// test_strlen(); // done
	// test_strcpy(); // done
	test_write();
	// test_strdup();
	// test_read(); // done
	// test_strcmp();
	return (0);
}
