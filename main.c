/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <dmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 17:57:29 by dmilan            #+#    #+#             */
/*   Updated: 2020/12/23 18:05:17 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

int		main(void)
{
	printf("Tests for strlen\n");
	printf("strlen(NULL): %d\n", strlen(NULL));
	printf("ft_strlen(NULL): %d\n\n", ft_strlen(NULL));
	printf("strlen(\"hello\"): %d\n", strlen("hello"));
	printf("ft_strlen(\"hello\"): %d\n\n", ft_strlen("hello"));
	printf("strlen(123): %d\n", strlen(123));
	printf("ft_strlen(123): %d\n\n", ft_strlen(123));
	
	return (0);
}
