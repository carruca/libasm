/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsierra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 09:44:58 by tsierra-          #+#    #+#             */
/*   Updated: 2021/02/09 17:20:18 by tsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

int	main()
{
	char	*line;
	int		c;
	char	src[] = "asdfasdfasdfowqowqoueuwqieuq";
	char	dst[] = "asdhereosisohissssssssssssssss";

	/*******FT_STRLEN********/
	line = NULL;
	printf("/---------------------/\n");
	printf("/------FT_STRLEN------/\n");
	printf("/---------------------/\n");
	line = "123456789";
	printf("line= %s\n", line);
	printf("strlen:		%lu\n", strlen(line));
	printf("ft_strlen:	%lu\n", ft_strlen(line));
	line = "H";
	printf("line= %s\n", line);
	printf("strlen:		%lu\n", strlen(line));
	printf("ft_strlen:	%lu\n", ft_strlen(line));
	line = "Hola que haces con tu vida en Madrid";
	printf("line= %s\n", line);
	printf("strlen:		%lu\n", strlen(line));
	printf("ft_strlen:	%lu\n", ft_strlen(line));
	
	/*******FT_STRCPY********/
	printf("/---------------------/\n");
	printf("/------FT_STRCPY------/\n");
	printf("/---------------------/\n");
	printf("strcpy:		$%s$\n", strcpy(dst, src));
	printf("ft_strcpy:	$%s$\n", ft_strcpy(dst, src));
	char	src2[] = "que hace aqui tio hazte algo";
	printf("strcpy:		$%s$\n", strcpy(dst, src2));
	printf("ft_strcpy:	$%s$\n", ft_strcpy(dst, src2));

	/*******FT_STRCMP********/
	char	linecmp1[] = "holaquetal";
	char	linecmp2[] = "holaadios";
	printf("/---------------------/\n");
	printf("/------FT_STRCMP------/\n");
	printf("/---------------------/\n");
	printf("src= %s\n", linecmp1);
	printf("dst= %s\n", linecmp2);
	printf("strcmp:		%d\n", strcmp(linecmp1, linecmp2));
	printf("ft_strcmp:	%d\n", ft_strcmp(linecmp1, linecmp2));
	char	linecmp3[] = "holaquetal";
	char	linecmp4[] = "";
	printf("strcmp:		%d\n", strcmp(linecmp3, linecmp4));
	printf("ft_strcmp:	%d\n", ft_strcmp(linecmp3, linecmp4));

	/*******FT_WRITE********/
	printf("/---------------------/\n");
	printf("/------FT_WRITE-------/\n");
	printf("/---------------------/\n");
	ssize_t	nbytes;
	nbytes = 0;
	printf("***1 - Valid write:***\n");
	printf("write:\n");
	nbytes = write(1, "Hola\n", 5);
	printf("ret = %zd\n", nbytes);
	nbytes = 0;
	errno = 0;
	printf("---------\n");
	printf("ft_write:\n");
	nbytes = ft_write(1, "Hola\n", 5);
	printf("ret = %zd\n", nbytes);
	printf("***2 - Invalid fd:***\n");
	nbytes = 0;
	errno = 0;
	printf("write:\n");
	nbytes = write(-1, "Hola\n", 5);
	printf("ret = %zd\n", nbytes);
	printf("errno = %d\n", errno);
	printf("error = %s\n", strerror(errno));
	nbytes = 0;
	errno = 0;
	printf("---------\n");
	printf("ft_write:\n");
	nbytes = ft_write(-1, "Hola\n", 5);
	printf("ret = %zd\n", nbytes);
	printf("errno = %d\n", errno);
	printf("error = %s\n", strerror(errno));
	printf("***3 - Invalid buf:***\n");
	nbytes = 0;
	errno = 0;
	printf("write:\n");
	nbytes = write(1, NULL, 5);
	printf("ret = %zd\n", nbytes);
	printf("errno = %d\n", errno);
	printf("error = %s\n", strerror(errno));
	nbytes = 0;
	errno = 0;
	printf("---------\n");
	printf("ft_write:\n");
	nbytes = ft_write(1, NULL, 5);
	printf("ret = %zd\n", nbytes);
	printf("errno = %d\n", errno);
	printf("error = %s\n", strerror(errno));

	/*******FT_READ********/
	printf("/---------------------/\n");
	printf("/-------FT_READ-------/\n");
	printf("/---------------------/\n");
	ssize_t	ret;
	int		fd;
	char	buf[100] = "";
	ret = 0;
	printf("***1 - Valid read:***\n");
	printf("read:\n");
	fd = open("ft_strcmp.c", O_RDONLY);
	ret = read(fd, buf, 10);
	printf("buf = %s\n", buf);
	printf("ret = %zd\n", ret);
	close(fd);
	printf("---------\n");
	ret = 0;
	printf("ft_read:\n");
	fd = open("ft_strcmp.c", O_RDONLY);
	ret = ft_read(fd, buf, 10);
	printf("buf = %s\n", buf);
	printf("ret = %zd\n", ret);
	close(fd);
	errno = 0;
	printf("***2 - Invalid fd:***\n");
	printf("read:\n");
	ret = read(-1, buf, 10);
	printf("errno = %d\n", errno);
	printf("error = %s\n", strerror(errno));
	printf("ret = %zd\n", ret);
	printf("---------\n");
	errno = 0;
	ret = 0;
	printf("ft_read:\n");
	ret = ft_read(-1, buf, 10);
	printf("errno = %d\n", errno);
	printf("error = %s\n", strerror(errno));
	printf("ret = %zd\n", ret);
	errno = 0;
	printf("***3 - Invalid buf:***\n");
	printf("read:\n");
	fd = open("ft_strcmp.c", O_RDONLY);
	ret = read(fd, NULL, 10);
	printf("errno = %d\n", errno);
	printf("error = %s\n", strerror(errno));
	printf("ret = %zd\n", ret);
	close(fd);
	printf("---------\n");
	errno = 0;
	ret = 0;
	printf("ft_read:\n");
	fd = open("ft_strcmp.c", O_RDONLY);
	ret = ft_read(fd, NULL, 10);
	printf("errno = %d\n", errno);
	printf("error = %s\n", strerror(errno));
	printf("ret = %zd\n", ret);
	close(fd);

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
