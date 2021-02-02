/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsierra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 09:44:58 by tsierra-          #+#    #+#             */
/*   Updated: 2021/02/02 17:33:11 by tsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

int	main()
{
	char	*line;
	int		c;

	line = NULL;
	printf("/---------------------/\n");
	printf("/------FT_STRLEN------/\n");
	printf("/---------------------/\n");
	line = "123456789";
	printf("line=%s\n", line);
	printf("strlen: %lu\n", strlen(line));
	printf("ft_strlen: %lu\n", ft_strlen(line));
	line = "H";
	printf("line=%s\n", line);
	printf("strlen: %lu\n", strlen(line));
	printf("ft_strlen: %lu\n", ft_strlen(line));
	line = "Hola que haces con tu vida en Madrid";
	printf("line=%s\n", line);
	printf("strlen: %lu\n", strlen(line));
	printf("ft_strlen: %lu\n", ft_strlen(line));

	/*******FT_TOLOWER*******/
	c = 0;
	c = 'C';
	printf("/---------------------/\n");
	printf("/-----FT_TOLOWER------/\n");
	printf("/---------------------/\n");
	printf("c = %c\n", c);
	printf("tolower: 	%c\n", tolower(c));
	printf("ft_tolower:	%c\n", ft_tolower(c));

	/*******FT_TOUPPER*******/
	c = 0;
	c = 'f';
	printf("/---------------------/\n");
	printf("/-----FT_TOLOWER------/\n");
	printf("/---------------------/\n");
	printf("c = %c\n", c);
	printf("toupper: 	%c\n", toupper(c));
	printf("ft_toupper:	%c\n", ft_toupper(c));
	return (0);
}
