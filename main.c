/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <dmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 17:57:29 by dmilan            #+#    #+#             */
/*   Updated: 2021/01/22 12:58:55 by dmilan           ###   ########.fr       */
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
	printf("Test: %s$\nOrig: %zu\nMine: %zu\n\n", "  ", strlen("  "), ft_strlen("  "));
}

void	test_strdup(void)
{
	printf("**********************************\n");
	printf("*  ft_strdup                     *\n");
	printf("**********************************\n");
}

void	test_strcpy(void)
{
	printf("**********************************\n");
	printf("*  ft_strcpy                     *\n");
	printf("**********************************\n");
}

void	test_strcmp(void)
{
	printf("**********************************\n");
	printf("*  ft_strcmp                     *\n");
	printf("**********************************\n");
	
	
}

void	test_read(void)
{
	printf("**********************************\n");
	printf("*  ft_read                       *\n");
	printf("**********************************\n");
}

void	test_write(void)
{
	printf("**********************************\n");
	printf("*  ft_write                      *\n");
	printf("**********************************\n");
}

int		main(void)
{
	test_strlen();
	// printf("Tests for strlen\n");
	// printf("strlen(NULL): %d\n", strlen(NULL));
	// printf("ft_strlen(NULL): %d\n\n", ft_strlen(NULL));
	// printf("strlen(\"hello\"): %d\n", strlen("hello"));
	// printf("ft_strlen(\"hello\"): %d\n\n", ft_strlen("hello"));
	// printf("strlen(123): %d\n", strlen(123));
	// printf("ft_strlen(123): %d\n\n", ft_strlen(123));
	
	return (0);
}
