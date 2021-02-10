/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsierra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 11:44:15 by tsierra-          #+#    #+#             */
/*   Updated: 2021/02/10 11:48:38 by tsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		i;

	if (!(copy = malloc((ft_strlen(s) + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
