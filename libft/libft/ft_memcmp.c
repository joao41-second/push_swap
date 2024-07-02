/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 13:09:52 by jperpect          #+#    #+#             */
/*   Updated: 2024/04/30 13:09:55 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*s1a;
	char	*s2a;

	i = 0;
	s1a = (char *)s1;
	s2a = (char *)s2;
	while (i < n)
	{
		if (s1a[i] != s2a[i])
		{
			return ((unsigned char)s1a[i] - (unsigned char)s2a[i]);
		}
		i++;
	}
	return (0);
}
/*
int	main(int ac, char **av)
{
    printf("%d\n", ft_memcmp(av[1],av[2],5));
    printf("%d", memcmp(av[1],av[2],5));
}*/