/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsierra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 09:44:58 by tsierra-          #+#    #+#             */
/*   Updated: 2021/02/01 09:45:04 by tsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

int	main()
{
	char	*line;
	int		c;

	line = NULL;
	line = "123456789";
	printf("/---------------------/\n");
	printf("/------FT_STRLEN------/\n");
	printf("/---------------------/\n");
	printf("strlen: %lu\n", strlen(line));
	printf("ft_strlen: %lu\n", ft_strlen(line));

	/*******FT_TOLOWER*******/
	c = 0;
	c = 'C';
	printf("/---------------------/\n");
	printf("/-----FT_TOLOWER------/\n");
	printf("/---------------------/\n");
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
